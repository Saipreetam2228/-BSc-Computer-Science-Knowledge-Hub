public class Vehicle
{
    int speed;
    int capacity;

    public Vehicle(int s, int capa)
    {
        this.speed = s;
        this.capacity = capa;
    }

    public void display()
    {
        System.out.println("Speed is" + speed + " km/h, Capacity is " + capacity + " persons");
    }
}
