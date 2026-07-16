package collections;
public class LRU<K,V>{
    int nodecount;
    Node<K,V> head;
    int cachesize;
    
    public LRU(int cs){
        head=null;
        cachesize=cs;
        nodecount=0;
    }
    public void put(K key,V val){
        if(nodecount==cachesize){
            System.out.println("Cache size is full");
            return;
        }
        Node<K,V> n=new Node<>(key,val);
        n.next=head;
        this.head=n;
        this.nodecount=nodecount+1;
        return;
      }
    public void get(K key){
        //if(head==null)
          //  return head;
        Node<K,V> t=head,t2=null;
        while(t.next!=null && t.next.key!=key){
            t=t.next;
          }
        if(t.next==null)
          return;
        //this.head=t.next;
        t2=t.next;
        t.next=t2.next;
        t.next.prev=t;
        t2.next=this.head;
        this.head=t2;
        t2.prev=null;
        //this.head=
        //this.head.prev=null;
       // this.head=t.next.prev;
       return;
        
        
    }
    public void print(){
     Node<K,V> t=head;
     while(t!=null){
          System.out.println(t.key+" "+t.val+"\n");
          t=t.next;
          
     }
    }
    
}
