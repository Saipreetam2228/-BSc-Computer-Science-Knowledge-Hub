package collections;
public class Node<K,V>{
    Node<K,V> prev;
     K key;
    V val;
     Node<K,V> next;
    
    public Node(K key,V val){
        prev=next=null;
        this.key=key;
        this.val=val;
    }
}
