/*
LANG: C
COMPILER: WCB
*/
#include <stdio.h>
#include <math.h>
main()
{
    int a,i,j,k=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",k+65);
            k++;
            if(k+65>90)
                k=0;
        }
        printf("\n");
    }
}


