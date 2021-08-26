#include <stdio.h>
int main()
{
   int m, n;
   printf("Enter two integers: ");
   scanf("%d %d",&m,&n);
   printf("G.C.D of %d and %d is %d.\n",m,n,GCD(m,n));
   return 0;
}
int GCD(int m,int n)
{
    if (m%n==0)
       return n;
    else
       GCD(n,m%n);
}
