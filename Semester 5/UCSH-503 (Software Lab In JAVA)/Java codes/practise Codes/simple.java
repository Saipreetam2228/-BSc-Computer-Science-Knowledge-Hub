/*
1. Simple

    Easy to learn and use because its syntax is similar to C++ but without complex features like pointers and operator overloading.

2. Object-Oriented

    Everything in Java is treated as an object, making code reusable, modular, and easier to maintain.

3. Platform Independent

    Java programs are compiled into bytecode which runs on the JVM, making it independent of the underlying OS.

4. Secure

    Java provides security through features like bytecode verification, sandboxing, and absence of explicit pointers.

5. Robust

    Java has strong memory management, exception handling, and type checking to avoid errors and crashes.

6. Multithreaded

    Supports multiple threads (lightweight processes) to run simultaneously, useful in applications like games and web servers.

7. Portable

    The same Java program can be executed on different platforms without modifications.

8. Distributed

    Java has APIs like RMI (Remote Method Invocation) and EJB (Enterprise JavaBeans) to build distributed applications.

9. High Performance

    Although slower than C/C++, Java uses Just-In-Time (JIT) compilation to optimize performance.

10. Dynamic

    Java supports dynamic linking of new class libraries, making it more flexible during runtime.
*/class Simpleexample {
    public static void main (String[] args) {
        system.out.println("java is simple")
    }
}

//2. Object-Oriented
class Animal {
    void sound() { 
    System.out.println("Animal makes sound"); }
}
class Dog extends Animal {
    void sound() { 
    System.out.println("Dog barks"); }
}
//main
public class TestOOP {
    public static void main(String[] args) {
        Animal obj = new Dog();
        obj.sound();
    }
}

//3. Platform Independent
class PlatformIndependent {
    public static void main(String[] args) {
        System.out.println("Runs anywhere with JVM!");
    }
}

//4. Secure
class SecurityExample {
    public static void main(String[] args) {
        String password = "secret";
        System.out.println("Data is protected internally.");
    }
}

//5. Robust(Java avoids crashes through exception handling and garbage collection.)
class RobustExample {
    public static void main(String[] args) {
        try {
            int a = 5 / 0;  // causes exception
        } catch (Exception e) {
            System.out.println("Handled exception: " + e);
        }
    }
}

//6. Multithreaded(Java supports concurrent execution using threads.)

    
