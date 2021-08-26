#include <stdio.h>
main()
{
    int a[5],i;
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(i=0;i<=4;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}
