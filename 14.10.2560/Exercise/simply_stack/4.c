#include <stdio.h>
main()
{
    int n,i,a[1000]={0},j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(j=n-1;j>=0;j--)
        printf("%d ",a[j]);
}
