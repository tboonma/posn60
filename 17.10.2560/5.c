#include <stdio.h>
main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int a[n+2];
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(j=1;j>0;j--)
    {
        for(i=1;i<=j;i++)
        {
            if(a[i]<a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    for(i=0;i<=4;i++)
        printf("%d ",a[i]);
}
