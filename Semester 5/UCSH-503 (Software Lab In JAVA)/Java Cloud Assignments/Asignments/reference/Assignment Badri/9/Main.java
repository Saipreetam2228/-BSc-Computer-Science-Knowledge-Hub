public class Main
{
    public void divide(int a, int b)
    {
        try
        {
            int ans = a/b;
            System.out.println("answer  " + ans);
        }
        catch (ArithmeticException e)
        {
            System.out.println("Error: Division by 0 is not defined in Maths");
        }
    }

    public static void main(String[] args)
    {
        Main m = new Main();
        m.divide(18, 2);
        m.divide(6, 0);
    }
}

