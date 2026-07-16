import java.util.Scanner;

public class Main
{
Scanner sc = new Scanner(System.in);
public static void main(String args[])
{
Scanner sc = new Scanner(System.in);
        System.out.print("Enter principal: ");
        float princ = sc.nextFloat();
        System.out.print("Enter rate ");
        float rate = sc.nextFloat();
      System.out.print("Enter time  ");
        float time = sc.nextFloat();
        SimpleInterest si = new SimpleInterest(princ, rate, time);
        System.out.println("Interest: " + si.solution());
        sc.close();
}
}
