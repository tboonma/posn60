#include <stdio.h>
main()
{
    char a[100];
    scanf("%s",&a);
    int i,n=0;
    while(a[n]!='\0')
    {
        n++;
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
}
