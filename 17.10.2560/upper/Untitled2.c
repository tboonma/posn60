#include <stdio.h>
main()
{
    int x,n,i,j,temp=0,xtemp,d;
    scanf("%d",&n);
    x=n*27/100;
    xtemp=n*27%100;
    if(xtemp>=50)
        x++;
    d=n-x;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=n-2;j>=0;j--)
    {
        for(i=0;i<=j;i++)
        {
            if(a[i]>a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
    printf("|");
    for(i=n-1;i>=d;i--)
    {
        printf("%d|",a[i]);
    }
}
