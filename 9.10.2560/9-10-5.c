#include <stdio.h>
main()
{
    char a[100];
    int i,j,n=0;
    scanf("%s",&a);
    while(a[n]!='\0')
        n++;
    for(i=0;i<n;i++)
    {
        if(a[i]>=97&&a[i]<=122)
        {
            printf("%c",a[i]);
        }
        if(a[i]>=65&&j<=90)
        {
            printf("%c",a[i]);
        }
    }
}
