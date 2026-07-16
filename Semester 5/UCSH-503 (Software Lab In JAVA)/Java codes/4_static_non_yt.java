public class bike{
    static int wheels=2;// static is used when the sam types of objects are created
    String color="";
    static void breaking(){
        System.out.println("Bike halts when breaks applied");
    }
    void mileage(int s){
        system.out.println("Mileage is"+s);
    }

//when an oblject performs different tasks then use the (NON-STATIC METHOD)instance method
//ex: String color="";
//when all the objects performs same tasks the use the static method.To create a Variable using Static Keyword
//ex: ##  static int wheels;

public static void main(String[]args){

    //  --- Creating an Object ---
    Bike RoyalEnfield=new Bike();
    Bike R15=new Bike();
    Bike Duke=new Bike();
    
    //  ---printing the no.of wheels for each bike---
        system.out.println("No.Of Wheels"+RoyalEnfield.wheels);
        system.out.println("No.Of Wheels"+R15.wheels);
        system.out.println("No.Of Wheels"+Duke.wheels);
    

    //  --- iinitizing the color and pinting---
    RoyalEnfield.color="Black";
    R15.color="blue";
    Duke.color="Black";
        system.out.println("Color"+RoyalEnfield.Color);
        system.out.println("Color"+R15.Color);
        system.out.println("Color"+Duke.Color);
    
    // --- breaking function applied ---
    RoyalEnfield.breaking();
    R15=new breaking();
    Duke=new breaking();

    //   ---mileage initizing and printing--
    RoyalEnfield.mileage(40);
    R15.mileage(20);
    Duke.mileage(35);



    }
}