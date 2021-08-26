#include <stdio.h>
main()
{
    int p,i,j,idle,h,sum=0,times=0,temp=0,min=9999,max=-9999;
    scanf("%d",&p);
    int a[p],b[p],c[p];
    if(p==0)
        printf("479");
    else
    {
        for(i=0;i<p;i++)
            scanf("%d %d",&a[i],&b[i]);
        for(i=0;i<p;i++)
        {
            if(min>a[i])
                min = a[i];
            if(max<b[i])
                max = b[i];
            idle=479-(max-min);
        }
        printf("%d",idle);
    }
}
