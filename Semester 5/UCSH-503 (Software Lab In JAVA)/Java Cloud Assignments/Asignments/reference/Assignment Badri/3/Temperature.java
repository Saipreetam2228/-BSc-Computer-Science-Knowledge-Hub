import java.util.Scanner;

public class Temperature
{
    // Method to convert Celsius to Fahrenheit
    public float celsiustofahrenheit(float c)
    {
        return (c * 9 / 5) + 32;
    }
    // Method to convert Fahrenheit to Celsius
    public double fahrenheittocelsius(double f)
    {
        return (f - 32) * 5 / 9;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Temperature t = new Temperature();
        
        System.out.print("Enter Temperature in celsius: ");
        float c = sc.nextFloat();
        
        if (c >= -273)
        System.out.println("In fahrenheit: " + t.celsiustofahrenheit(c));
        else
            System.out.println("Wrong celsius value.");

        System.out.print("Enter Temperature in fahrenheit: ");
        double f = sc.nextDouble();
        if (f >= -459)
            System.out.println("In Celsius: " + t.fahrenheittocelsius(f));
        else
            System.out.println("Wrong farenheit value.");
        
        sc.close();
    }
}
