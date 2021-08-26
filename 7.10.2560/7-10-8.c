#include <stdio.h>
main()
{
    int x,y,i,j,n=0;
    scanf("%d %d",&x,&y);
    int a[x];
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[y];
    for(j=0;j<y;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<y;i++)
    {
        for(j=0;j<x;j++)
        {
            if(a[i]==b[j])
                n++;
        }
    }
    printf("%d",n);
}
