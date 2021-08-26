#include <stdio.h>
#include <math.h>
float InputFloat();
float SumFloat(float,float,float,float);
int i;
float m=0;
void main()
{
	float   a1,a2,sumVal;
	float a3;
	a1  =  InputFloat();
	a2  =  InputFloat();
    a3  =  InputFloat();
	sumVal  =  SumFloat(a1,a2,a3,m);
}
float InputFloat()
{
	float  x;
	scanf("%f",&x);
	return x;
}
float SumFloat(float x,float y,float z,float m)
{
	for(i=1;i<=z;i++)
    {
        m=x*pow(1+(y)/100,i);
        printf("Y %d = %.6f\n",i,m);
    }
}
