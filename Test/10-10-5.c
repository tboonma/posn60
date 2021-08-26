#include <stdio.h>
main()
{
    int a[100],d,i,j,n=0;
    scanf("%d",&d);
    for(i=0;i<d;i++)
    {
        scanf("%d",&a[i]);
        for(j=i;j>0;j--)
        {
            if(a[i]==a[j])
                n++;
        }
    }
    //for(i=0;i<d;i++)
    //{
     //   if()
    //}
    printf("\n%d\n",a[0]);
    printf("%d\n",a[1]);
    printf("%d\n",a[2]);
    printf("%d\n",a[3]);
    printf("%d\n",a[4]);
    printf("%d\n",a[j]);
    printf("%d\n",n);
}
