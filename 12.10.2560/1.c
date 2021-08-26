#include <stdio.h>
long fib(long);
int main()
{
    int n;
    printf("Enter integers: ");
    scanf("%d",&n);
    printf("F[%d]= %ld\n",n,fib(n));
    return 0;
}
long fib(long n)
{
    int ans;
    if (n==1||n==2)
        return 1;
    else
        ans=fib(n-1)+fib(n-2);
    return (ans);
}
