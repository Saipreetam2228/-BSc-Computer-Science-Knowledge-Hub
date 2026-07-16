import java.util.HashMap;
import java.util.Map;

public class LRU<K, V> {

    // Doubly linked list node
    private static class Node<K, V> {
        K key;
        V value;
        Node<K, V> prev, next;

        Node() {} // dummy node constructor
        Node(K key, V value) {
            this.key = key;
            this.value = value;
        }
    }

    private final int capacity;
    private final Map<K, Node<K, V>> map;
    private final Node<K, V> head, tail; // dummy nodes

    // Constructor
    public LRU(int capacity) {
        if (capacity <= 0) {
            throw new IllegalArgumentException("Capacity must be greater than 0");
        }
        this.capacity = capacity;
        this.map = new HashMap<>();
        this.head = new Node<>();
        this.tail = new Node<>();
        head.next = tail;
        tail.prev = head;
    }

    // Get value
    public V get(K key) {
        Node<K, V> node = map.get(key);
        if (node == null) return null;
        moveToHead(node);
        return node.value;
    }

    // Put value
    public void put(K key, V value) {
        Node<K, V> node = map.get(key);
        if (node != null) {
            // Update existing
            node.value = value;
            moveToHead(node);
        } else {
            // Add new
            Node<K, V> newNode = new Node<>(key, value);
            map.put(key, newNode);
            addToHead(newNode);

            if (map.size() > capacity) {
                Node<K, V> tailNode = removeTail();
                map.remove(tailNode.key);
            }
        }
    }

    // Return current size
    public int size() {
        return map.size();
    }

    // Return capacity
    public int capacity() {
        return this.capacity;
    }

    // --- Helper methods ---

    private void addToHead(Node<K, V> node) {
        node.prev = head;
        node.next = head.next;
        head.next.prev = node;
        head.next = node;
    }

    private void removeNode(Node<K, V> node) {
        node.prev.next = node.next;
        node.next.prev = node.prev;
    }

    private void moveToHead(Node<K, V> node) {
        removeNode(node);
        addToHead(node);
    }

    private Node<K, V> removeTail() {
        Node<K, V> last = tail.prev;
        removeNode(last);
        return last;
    }

    // Demo main
    public static void main(String[] args) {
        LRU<Integer, String> cache = new LRU<>(2);

        cache.put(1, "A");   // [1:A]
        cache.put(2, "B");   // [2:B, 1:A]
        System.out.println(cache.get(1)); // "A"
        cache.put(3, "C");   // evicts 2 → [3:C, 1:A]
        System.out.println(cache.get(2)); // null
        cache.put(4, "D");   // evicts 1 → [4:D, 3:C]
        System.out.println(cache.get(1)); // null
        System.out.println(cache.get(3)); // "C"
        System.out.println(cache.get(4)); // "D"
    }
}

