package shapes;

public class Circle implements Shape
{
    float radius;

    public Circle(float rad)
    {
        this.radius = rad;
    }

    public float area()
    {
        return 3.14f * radius * radius;
    }

    public float perimeter()
    {
        return 2 * 3.14f * radius;
    }
}

