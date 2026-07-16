public class Bank{
  String accountnumber;
  int balance=0;
  int amount;
  
  //Rupees >100
  int deposit(int amount){
    if amount>=100{
      balance=balance+amount;
    }
    System.out.println("Not enough (<100)");
    
  return balance;
  }
  int withdraw(int amount){
    if balance < amount{
      System.out.println("insufficient balance");
    }
    balance=balance-amount;
    return balance;
  }
  
  void display(){
    System.out.println("Balance= "+balance);
  }
  

  public static void main(String[] args){
    Bank val=new Bank();
    val.deposit(10000)
  }
}
