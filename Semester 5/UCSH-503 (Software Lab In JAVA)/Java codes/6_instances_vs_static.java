public class Function{
    int i=10;        //instance var
    static int s=20; //static var
    void printvalue(){
        system.out.println(""+i)
    }
    String i;  //System.out.println(" "+f1.i); # Output: NULL
    //access specfier can be used (public)
//static vriable can be called in 3 ways 
//1 direct ,class name ,reference
    public static void main(String[] args){
        Function f1=new Funcion(); //instance variable creation
        System.out.println(" "+f1.i); //instance var print
        system.out.println(""+s); //static variable print
        f1.printvalue();//call fun
    }
}

/*
---INSTANCE VAIABLE---
->non static variable and are declared in a class outside any method, consuctor or block
->Objec creation is mandatory
->Scope-- inside all methods, blocks, constuctor
->Initilalization is not mandatory its default value is 0, false, null
->Access Specifier can br used
->Object is creted,allocates memory to variables

---CLASS/STATIC VARIABLE---
->Declerad using the static Keyword within a class outside any method constuctor or block.
->Object creation is not necessary
->Inside alll methods Blocks, Constructor
->Initialization is not mndatory. its default value is 0, false, null
-> Access specifier can be used
-> when calss file loaded, llocates memory to variable
 */