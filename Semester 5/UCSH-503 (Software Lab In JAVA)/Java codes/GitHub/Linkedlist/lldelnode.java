package collections;

public class SinglyLinkedList implements LinkedList<Integer> {
    public SinglyLinkedList next;
    public int data;

    public SinglyLinkedList() {
        this.next = null;
        this.data = 0;
    }

    @Override
    public void addNode(Integer data) {
        SinglyLinkedList temp = this;
        while (temp.next != null) {
            temp = temp.next;
        }
        SinglyLinkedList newNode = new SinglyLinkedList();
        newNode.data = data;
        temp.next = newNode;
    }

    @Override
    public void deleteNode(int target) {
        SinglyLinkedList temp = this;

        if (temp.data == target && temp.next != null) {
            temp.data = temp.next.data;
            temp.next = temp.next.next;
            return;
        }

        while (temp.next != null) {
            if (temp.next.data == target) {
                temp.next = temp.next.next;
                return;
            }
            temp = temp.next;
        }

        System.out.println("Node with value " + target + " not found.");
    }

    @Override
    public int sizeOf() {
        int size = 0;
        SinglyLinkedList temp = this;
        while (temp != null) {
            size++;
            temp = temp.next;
        }
        return size;
    }

    @Override
    public Integer find() {
        return -1;
    }

    @Override
    public void replace(int oldValue, int newValue) {
        SinglyLinkedList temp = this;
        boolean found = false;

        while (temp != null) {
            if (temp.data == oldValue) {
                temp.data = newValue;
                found = true;
            }
            temp = temp.next;
        }

        if (!found) {
            System.out.println("Value " + oldValue + " not found to replace.");
        }
    }

    public static void main(String[] args) {
        SinglyLinkedList linkedList = new SinglyLinkedList();
        linkedList.addNode(10); 
        linkedList.addNode(200);
        linkedList.addNode(30);
        linkedList.addNode(40);
        linkedList.addNode(50);

        linkedList.deleteNode(30);
        linkedList.replace(200, 999);

        SinglyLinkedList temp = linkedList;
        while (temp != null) {
            System.out.println(temp.data);
            temp = temp.next;
        }
    }
}

