public class Car extends Vehicle
{
    String ftype;
    public Car(int speed, int capacity, String fuelType)
    {
        super(speed, capacity);
        this.ftype = fuelType;
    }
    @Override
    public void display()
    {
        super.display();
        System.out.println("Fuel Type: " + ftype);
    }
    public static void main(String[] args)
    {
        Vehicle v = new Vehicle(80, 50);
        v.display();

        Car c = new Car(120, 5, "Petrol");
        c.display();
    }
}

