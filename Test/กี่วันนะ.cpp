/*
LANG: C
COMPILER: WCB
*/
#include <stdio.h>
main()
{
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int x,y,i,d,b,c,e,sum=0;
    scanf("%d %d %d %d",&x,&b,&y,&c);
    if(x!=y&&x!=c&&b!=y&&b!=c)
    {
        a[b]=a[b]-x;
        a[c]=y;
        for(i=b;i<=c;i++)
        {
            sum=sum+a[i];
        }
        printf("%d",sum+1);
    }
    else if(b==c)
    {
        printf("%d",y-x+1);
    }
    else if(x==y)
    {
        a[b]=a[b]-x;
        a[c]=y;
        for(i=b;i<=c;i++)
        {
            sum=sum+a[i];
        }
        printf("%d",sum+1);
    }
    else
        printf("%d",1+1);
}
