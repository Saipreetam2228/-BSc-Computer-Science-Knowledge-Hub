public class Main
{
 int accountnumber;
 float balance;
 
public Main(int accnum, float bal)
{
this.accountnumber=accnum;
this.balance= bal;
}

public void deposit(float amount)
{
balance=balance+amount;
System.out.println( amount + "deposited");
}

public void withdraw(float amount )
{
if (balance<= amount)
System.out.println("Insufficient funds");
else
{
balance=balance-amount;
System.out.println("withdrwan amount"+ amount );
System.out.println("Remaiinig balance"+ balance );
}
}

public void display()
{
System.out.println("Current balance is "+ balance );
}
public static void main(String[] args)
    {
        Main ba = new Main(124500, 5000);
        ba.display();
        ba.deposit(2500);
        ba.withdraw(5000);
        ba.withdraw(2000);
        ba.display();
    }

}
