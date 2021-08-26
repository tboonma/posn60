#include <stdio.h>
main()
{
    char a[100];
    int i,j,n=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65&&a[i]<=90)
            {
                a[i]=a[i]+32;
            }
    }
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                a[j]='A';
            }
        }
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=97&&a[i]<=122)
        {
            n++;
        }
    }
    printf("%d",n);
}
