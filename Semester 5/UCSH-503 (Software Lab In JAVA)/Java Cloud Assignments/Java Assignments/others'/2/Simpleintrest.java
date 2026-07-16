public class Simpleintrest{
	int principal,rate,time;
	int temp,s,i;
	
	float calc(float p,float r, float t){
	  float intrest=0;
	  intrest=(p+r+t)/100;
	  return intrest;
	}
public static void main(String[] args){
   Simpleintrest s1=new Simpleintrest();
   float t=0;
   t= s1.calc(100,200,300);
    System.out.println("intrest "  + t);
  }
}

