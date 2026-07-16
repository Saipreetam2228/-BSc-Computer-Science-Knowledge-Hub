public class LLnode{ // main function with name "LLnode"
    //for the linked list ;initializing data,next as fields
    LLnode next;     //stores the next node address/reference in it 
    int data;       //stores the data in it
    
    // adding new node with the new data 
    public LLnode addnode(int data)throws Exception{
        LLnode temp=this;  //referes to the current node
        //this is a special keyword that refers to the current object.
        //the object on which the method is being called.
        while(temp.next!=null){ //condition loop untill the last node which is null 
            temp=temp.next;   //iteration
        }
        temp.next=new LLnode();//connecting a new node to the end of the list 
        temp.next.data=data;//Setting the data to it 
        return this;  // return the head
    }
    //deleting a particular node by using head to iterate
    public LLnode delete(int data)throws Exception{
        LLnode temp=this;
        if(temp.data==data){
            return(temp.next);
        }
        while(temp!=null){
            //Traverse the list to find the node whose next node contains the data.
            if(temp.next.data==data){ 
                temp.next=temp.next.next;
                break;//
            }
            temp=temp.next;
        }
        return this;//return the head
        //return can't be accepted in java ; some value should be there
    }
    
    public static void main(String[] args)throws Exception{
        LLnode head=new LLnode(); //creating a new node for the linked list
        head.data=10;
        head.addnode(20);
        head.addnode(30);
        head.addnode(40);
        head.addnode(50);
        //overall linked list (print 10->20->30->40->50)
        LLnode temp=head;
        while(temp!=null){
            System.out.println(temp.data);
            temp=temp.next;
        }    
        System.out.println("overall linked list (print 10->20->30->40->50)");
        head=head.delete(30);
        //after deleting the node 3 by the value (30)
        temp=head;
        while(temp!=null){
            System.out.println(temp.data);
            temp=temp.next;
        }
        System.out.println("node with data (30) is deleted");
    }
}
        
