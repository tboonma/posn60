#include <stdio.h>
int n,m,i,sum=0,x;
void main()
{
    scanf("%d %d",&n,&m);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]+a[i+1]<=m)
        {
            x++;
            i++;
        }
        else if(a[i]+a[i+1]>m)
            x++;
    }
    printf("%d",x);
}
