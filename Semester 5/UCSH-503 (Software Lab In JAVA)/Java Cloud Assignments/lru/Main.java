import collections.*;

public class Main{
    public static void main(String... args){
        LRU<Integer,String> l=new LRU<>(3);
        l.put(91,"X");
        //System.out.println(l.head.val);
        l.put(92,"Y");
        
        l.put(93,"Z");
        l.put(94,"W");
        l.print();
        System.out.println("after get thing.....");
        l.get(92);
        l.print();
        
    }

}
