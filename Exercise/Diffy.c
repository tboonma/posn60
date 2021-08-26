#include <stdio.h>
#include <math.h>
main()
{
    int a,b,c,d,e,x=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("%d %d %d %d\n",a,b,c,d);
    while(a!=0||b!=0||c!=0||d!=0)
    {
        e=a;
        a=abs(a-b);
        b=abs(b-c);
        c=abs(c-d);
        d=abs(d-e);
        x++;
        printf("%d %d %d %d\n",a,b,c,d);
    }
    printf("%d",x);
}
