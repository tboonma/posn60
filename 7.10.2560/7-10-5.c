#include <stdio.h>
main()
{
    int a[5]={15,34,28,36,11},temp,i,j;
    for(j=1;j>=0;j--)
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

    printf("%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
}
