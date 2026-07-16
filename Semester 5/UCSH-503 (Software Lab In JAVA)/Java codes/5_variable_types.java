public class Function{
    //local Variable
    void printname(){
        String a="ASP";
        system.out.println("name:"+a);
    }//End of function # de-allocates the memory automatically
    
    public static void main(String[] args) {
        Funcion obj=new Function();
    obj.printname();
    }
}

/* --- Types of variable --
    
    int a; //declaring a variable 
    int a=10; //initializing the variable  
    
    -> Local variable
     - Decleration = Block or method or constructor
     -Scope = Can access these variable only withiin the block
     -Initialization = Initization is mandatory
     -Access Spectifer = no
     -Alloction = Created when the block is entered or the function is called and destroyed after existing.
     
    
    
    */