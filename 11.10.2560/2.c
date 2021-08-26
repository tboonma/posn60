#include <stdio.h>
void one(void);
void two(void);
void main(void)
{
    one( );
    two( );
}
void one()
{
   int a=5,b=7;
   printf("A = %d, B = %d\n",a,b);
}
void two()
{
   float p=4.5,q=3.5;
   printf("P = %6.2f, Q = %6.2f\n",p,q);
}
