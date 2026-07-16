public class Pattern
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

    public static void Main(String[] args)
    {
        Pattern p = new Pattern();
       p.print(5);
    }
}

