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
    int j;
    for (i=0;i<=n-1;i++)
    {
        printf("\n%d ",a[i]);
        for (j=0;j<=a[i]-1;j++)
        {
            printf("*",a[i]);
        }
    }
}
