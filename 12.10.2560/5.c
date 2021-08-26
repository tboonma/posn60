#include <stdio.h>
int n=0;
main()
{
    int a;
    scanf("%d",&a);
    if(a<=1)
        printf("No");
    else
    {
        check(a,2);
        if(n==0)
            printf("Yes");
        else
            printf("No");
    }

}
int check(int a,int b)
{
    if(a>b)
    {
        if(a%b==0)
            n++;
        check(a,b+1);
    }
}
