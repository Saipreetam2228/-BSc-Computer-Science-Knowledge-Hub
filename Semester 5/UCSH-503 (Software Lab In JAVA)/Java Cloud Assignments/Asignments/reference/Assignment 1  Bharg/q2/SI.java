public class SI
{
float p;
float r;
float t;

public SI(float prin, float rate, float time)
{
this.p=prin;
this.r=rate;
this.t= time;
}

public float sol()
{
return (p*r*t)/100;
}
}

