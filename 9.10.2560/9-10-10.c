#include <stdio.h>
main()
{
    char a[100];
    gets(a);
    int n=0,i;
    while(a[n]!='\0')
        n++;
    for(i=0;i<n;i++)
    {
        if(a[i]>=65&&a[i]<=90){
            a[i]=a[i]+32;
        printf("%c",a[i]);
        }
        else if(a[i]>=97&&a[i]<=122){
            a[i]=a[i];
        printf("%c",a[i]);
        }
    }
}
