#include <stdio.h>
main()
{
    int m, n;
    scanf("%d %d",&m,&n);
    printf("%d",m*n/GCD(m,n));
    return ;
}
int GCD(int m,int n)
{
    if (m%n==0)
       return n;
    else
       GCD(n,m%n);
}
