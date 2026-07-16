public class Rectangle
{
private float length;
private float width;
    public Rectangle(float len, float w)
    {
        this.length = len;
        this.width = w;
    }
    public float area()
    {
        return length * width;
    }
    public float perimeter()
    {
        return 2 * (length + width);
    }
    public static void main(String[] args)
    {
        Rectangle rec = new Rectangle(6, 5);
        System.out.println("Area is " + rec.area());
        System.out.println("Perimeter is  " + rec.perimeter());
    }
}

