#include <stdio.h>
#include <string.h>
main()
{
    char a[100];
    gets(a);
    int num,i,j,sum,sum2=0;
    num=strlen(a);
    int b[num];
    for(i=0;i<num;i++)
    {
        if(a[i]=='i'||a[i]=='I')
            b[i]=1;
        else if(a[i]=='v'||a[i]=='V')
            b[i]=5;
        else if(a[i]=='x'||a[i]=='X')
            b[i]=10;
        else if(a[i]=='l'||a[i]=='L')
            b[i]=50;
        else if(a[i]=='c'||a[i]=='C')
            b[i]=100;
        else if(a[i]=='d'||a[i]=='D')
            b[i]=500;
        else if(a[i]=='m'||a[i]=='M')
            b[i]=1000;

    }
    for(i=num-1;i>=0;i--)
    {
        if(i!=0)
        {
            j=i-1;
            if(b[i]<=b[j])
            {
                sum=b[i]+b[j];
                i--;
            }
            else if(b[i]>b[j])
            {
                sum=b[i]-b[j];
                i--;
            }
            sum2+=sum;
        }
        else if(i==0)
            sum2+=b[i];
    }
    printf("%d",sum2);
}
