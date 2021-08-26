#include <stdio.h>
int a,b,c,d,e,i,j;
int x(),y();
main()
{
    scanf("%d",&a);
    x(a);
}
int x()
{
    for(i=0;i<a;i++)
    {
        scanf("%d %d %d",&b,&c,&d);
        printf("%d\n",y(d));
    }
}
int y()
{
    for(j=1;j<d-1;j++)
    {
        e=b+c;
        if(j%2==1)
            b=e;
        if(j%2==0)
            c=e;
    }
    d=e;
    return d;
}
