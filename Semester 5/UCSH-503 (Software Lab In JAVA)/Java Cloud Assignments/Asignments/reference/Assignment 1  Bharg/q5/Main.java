public class Main
{
 int anum;
 float bal;
 
public Main(int accountnum, float balance)
{
this.anum=accountnum;
this.bal= balance;
}

public void deposit(float amount)
{
bal=bal+amount;
System.out.println( amount + "deposited");
}

public void withdraw(float amount )
{
if (bal<= amount)
System.out.println("Insufficient funds");
else
{
bal=bal-amount;
System.out.println("withdrwan amount"+ amount );
System.out.println("Remaiinig balance"+ bal );
}
}

public void display()
{
System.out.println("Current balance is "+ bal );
}
public static void main(String[] args)
    {
        Main ba = new Main(12345, 5000);
        ba.display();
        ba.deposit(1500);
        ba.withdraw(7000);
        ba.withdraw(3000);
        ba.display();
    }

}
