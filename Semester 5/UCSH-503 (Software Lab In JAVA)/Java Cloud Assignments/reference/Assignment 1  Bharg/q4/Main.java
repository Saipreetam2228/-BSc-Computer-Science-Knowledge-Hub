public class Main
{
    public void print(int rows)
    {
        for (int i = 1; i <= rows; i=i+1)
        {
            for (int j = 1; j <= i; j=j+1)
            {
                System.out.print(j + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args)
    {
        Main m = new Main();
       m.print(5);
    }
}

