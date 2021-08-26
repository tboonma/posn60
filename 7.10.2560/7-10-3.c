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
        printf("%d ",a[i]);
        for (j=0;j<=i;j++)
        {
            if(i!=j)
                printf("*");
            else
                printf("*\n");
        }
    }
}
