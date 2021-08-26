#include <stdio.h>
float InputFloat();
float SumFloat(float,float,float);
void PrintOut(float);
void main()
{
	float   a1,a2,a3,sumVal;
	a1  =  InputFloat();
	a2  =  InputFloat();
    a3  =  InputFloat();
	sumVal  =  SumFloat(a1,a2,a3);
	PrintOut(sumVal);
}
float InputFloat()
{
	float  x;
	printf ("\nInput real value : ");
	scanf("%f",&x);
	return x;
}
float SumFloat(float x,float y,float z)
{
	return (x+y+z);
}
void PrintOut(float x)
{
	printf ("\nx is : %.2f\n",x);
}

