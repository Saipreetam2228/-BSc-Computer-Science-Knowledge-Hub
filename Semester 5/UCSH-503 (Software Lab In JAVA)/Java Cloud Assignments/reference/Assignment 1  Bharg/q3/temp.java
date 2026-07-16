import java.util.Scanner;

public class temp
{
    public float ctof(float c)
    {
        return (c * 9 / 5) + 32;
    }

    public double ftoc(double f)
    {
        return (f - 32) * 5 / 9;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        temp t = new temp();
        
        System.out.print("Enter temp in celsius: ");
        float c = sc.nextFloat();
        
        if (c >= -273)
        System.out.println("In fahrenheit: " + t.ctof(c));
        else
            System.out.println("Wrong celsius value.");

        System.out.print("Enter temp in fahrenheit: ");
        double f = sc.nextDouble();
        if (f >= -459)
            System.out.println("In Celsius: " + t.ftoc(f));
        else
            System.out.println("Wrong farenheit value.");
        
        sc.close();
    }
}
