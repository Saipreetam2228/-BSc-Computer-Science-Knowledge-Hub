package shapes;

public class Circle implements Shape
{
    float r;

    public Circle(float radius)
    {
        this.r = radius;
    }

    public float area()
    {
        return 3.14f * r * r;
    }

    public float perimeter()
    {
        return 2 * 3.14f * r;
    }
}

