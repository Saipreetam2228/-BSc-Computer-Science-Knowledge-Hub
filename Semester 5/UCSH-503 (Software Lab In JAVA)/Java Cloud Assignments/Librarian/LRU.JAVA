import java.util.*;

public class LRU<K, V> {// generic LRU cache class (K = key type, V = value type)
    private static class Node<K, V> { // doubly-linked list node to store key & value
        K key; V value;     // stores the key and the value
        Node<K, V> prev, next;   // pointers to previous and next nodes
        Node(K k, V v) { key = k; value = v; }  // simple constructor
    }

    private final int capacity;  // max number of entries allowed in cache
    private final Map<K, Node<K, V>> map; // hashmap: key -> node (for O(1) lookup)
    private final Node<K, V> head, tail;   // Temp head & tail to simplify add/remove logic

    public LRU(int capacity) {    // constructor: initialize capacity, map, and Temp nodes
        this.capacity = capacity;
        this.map = new HashMap<>();
        head = new Node<>(null, null); // Temp head (no real key/value)
        tail = new Node<>(null, null);  // Temp tail (no real key/value)
        head.next = tail;        // link head <-> tail
        tail.prev = head;
    }

    public V get(K key) {     // get value by key; update node to MRU if found
        Node<K, V> node = map.get(key);
        if (node == null) return null;     // not present
        moveToHead(node);           // mark as most recently used
        return node.value;
    }

    public void put(K key, V value) {     // add or update a key/value pair
        Node<K, V> node = map.get(key);
        if (node != null) {
            node.value = value;         // update existing
            moveToHead(node);        // recently used
        } else {
            Node<K, V> newNode = new Node<>(key, value);
            map.put(key, newNode);     // add to map
            addToHead(newNode);           // add to front (MRU)
            if (map.size() > capacity) {      // if over capacity, evict LRU
                Node<K, V> tailNode = removeTail();
                map.remove(tailNode.key);  // remove evicted key from map
            }
        }
    }

    private void addToHead(Node<K, V> node) {    // insert node right after Temp head 
        node.next = head.next;
        node.prev = head;
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
        Node<K, V> node = tail.prev;
        removeNode(node);
        return node;
    }
//============== MAIN=================
    public static void main(String[] args) {     // small demo / manual test
        LRU<Integer, Integer> cache = new LRU<>(2);
        cache.put(1, 1);
        cache.put(2, 2);
        System.out.println(cache.get(1));     
        cache.put(3, 3);                       
        System.out.println(cache.get(2));       
    }
}

