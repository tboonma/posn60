#include <stdio.h>
int i,j,temp=0;
main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++){
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }}
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
