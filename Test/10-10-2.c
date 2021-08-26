#include <stdio.h>
main()
{
    int a,b,c,d,mo,t1,t2,t3,t4,t5,t6,am,bm,cm,a2,b2,c2;
    scanf("%d %d %d",&a,&b,&c);
    am=a*1000;
    bm=b*500;
    cm=c*100;
    d=am+bm+cm;
    while(d>0)
    {
        scanf("%d",&mo);
        if(mo>d||mo%100>0||mo%100<0)
        {
            printf("ERROR\n");
            printf("%d %d %d\n",a,b,c);
        }
        else
        {
        t1=mo/1000;
        t2=mo%1000;
        a=a-t1;
        t3=t2/500;
        t4=t2%500;
        b=b-t3;
        t5=t4/100;
        t6=t4%100;
        c=c-t5;
        printf("1000 = %d\n500 = %d\n100 = %d\n",t1,t3,t5);
        printf("%d %d %d\n",a,b,c);
        d=d-mo;
        printf("%d\n",d);
        }
    }
        printf("EMPTY");
}
