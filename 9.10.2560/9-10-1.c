#include <stdio.h>
main()
{
    char a[100];
    int n=0;
    scanf("%s",&a);
    while(a[n]!='\0')
    {
        n++;
    }
    printf("%d",n);
}
