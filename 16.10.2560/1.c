#include <stdio.h>
main()
{
    int i=0,n,j,temp,temp2;
    int a;
    scanf("%d",&a);
    int arr[100000];
    if(a==0)
        printf("0");
    else if(a==1)
        printf("1");
    else
    {
        while(a>=2)
        {
            temp=a;
            a=a/2;
            arr[i]=temp%2;
            if(a>=2)
                i++;
        }
        printf("%d",a);
        for(j=i;j>=0;j--)
        {
            printf("%d",arr[j]);
        }
    }
}
