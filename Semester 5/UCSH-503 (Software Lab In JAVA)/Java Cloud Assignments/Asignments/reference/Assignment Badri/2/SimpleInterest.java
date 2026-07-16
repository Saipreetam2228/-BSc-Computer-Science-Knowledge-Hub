public class SimpleInterest
{
   float p;
   float r;
   float t;

public SimpleInterest(float principal,float rate,float time)
{
    this.p=principal;
    this.r=rate;
    this.t=time;
}

public float solution()
{
   return (p*r*t)/100;
}
}


