#include <stdio.h>
void areacir(float r, float* area, float* cir);
int main()
{
	float r=0.0,area=0.0,cir=0.0;
	printf("Enter the radius:");
	scanf("%f", &r);
	areacir(r,&area,&cir);
	printf("The area of the circle:%.1f\nThe circumference of the circle:%.1f\n",area,cir);
}
void areacir(float r, float* area, float* cir)
{
	*area=3.14*r*r;
	*cir=2*3.14*r;
	return;
}
