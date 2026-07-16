public class Rectangle
{
private float l;
private float w;
    public Rectangle(float length, float width)
    {
        this.l = length;
        this.w = width;
    }
    public float area()
    {
        return l * w;
    }
    public float perimeter()
    {
        return 2 * (l + w);
    }
    public static void main(String[] args)
    {
        Rectangle r = new Rectangle(5, 3);
        System.out.println("Area is " + r.area());
        System.out.println("Perimeter is  " + r.perimeter());
    }
}

