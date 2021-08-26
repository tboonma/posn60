#include <stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for (i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=-99999,min=99999;
    float b,sum=0;
    for (i=0;i<=n-1;i++)
    {
        sum=sum+a[i];
        if(max<a[i])
            max = a[i];
        if(min>a[i])
            min = a[i];
    }
    b=sum/n;
    printf("%.2f %d %d",b,max,min);
}
