#include <stdio.h>
#include <string.h>
main()
{
    char a[100];
    gets(a);
    int num,i,j;
    num=strlen(a);
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(a[i]==a[j])
                a[j]='1';
            if(a[i]==a[j]+32||a[i]+32==a[j])
                a[j]='1';
        }
    }
    for(i=0;i<num;i++)
    {
        if(a[i]>=65&&a[i]<=90)
            printf("%c",a[i]);
        else if(a[i]>=97&&a[i]<=122)
            printf("%c",a[i]);
    }
}
