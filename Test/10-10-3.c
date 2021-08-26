#include <stdio.h>
main()
{
    int x,i,j,n=0;
    scanf("%d",&x);
    int a[100];
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    while(i=0)
    {
        for(j=i+1;j<x;j++)
        {
            if(a[i]=a[j])
                a[i]++;
        }
        i++;
    }
    printf("%d\n",a[i]);
    printf("%d",n);
}
