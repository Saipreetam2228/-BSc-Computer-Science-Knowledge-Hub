import shapes.Circle;

public class Main
{
    public static void main(String[] args)
    {
        Circle c = new Circle(5);
        System.out.println("Area of cirle is  " + c.area());
        System.out.println("Circumference of circle is " + c.perimeter());
    }
}
