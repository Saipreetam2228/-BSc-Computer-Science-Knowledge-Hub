public class Vehicle
{
    int s;
    int c;

    public Vehicle(int speed, int capacity)
    {
        this.s = speed;
        this.c = capacity;
    }

    public void display()
    {
        System.out.println("Speed is" + s + " km/h, Capacity is " + c + " persons");
    }
}

