#include <stdio.h>
#include <math.h>
main()
{
    int i,j,mul=0,temp=0;
    char a[8];
    scanf("%s",&a);
    int n=0,k=0,m;
    while(a[n]!='\0')
        n++;
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            if(a[i]=='1')
                k=1;
            if(a[i]=='0')
                k=0;
            m=pow(2,i);
            mul=k*pow(2,i);
            temp+=mul;
            printf("(%c*%d)",k,m);
            if (m!=1)
                printf("+");
            break;
        }
    }
    printf(" = %d",temp);
}
