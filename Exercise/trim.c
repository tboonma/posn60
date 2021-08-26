#include <stdio.h>
main()
{
    char a[100];
    int i,j,n=0;
    gets(a);
    while(a[n]!='\0')
        n++;
    for(i=0;i<n;i++)
    {
        if(a[i]>=97&&a[i]<=122)
        {
            printf("%c",a[i]);
        }
        else if(a[i]>=65&&a[i]<=90)
        {
            printf("%c",a[i]);
        }
    }
}
