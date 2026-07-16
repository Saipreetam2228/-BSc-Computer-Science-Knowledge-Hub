package collections;

public interface LinkedList<K> {
    public void addNode(K data);  
    public void deleteNode(int target);
    public int sizeOf();
    public K find();
    public void replace(int oldValue, int newValue);
}

