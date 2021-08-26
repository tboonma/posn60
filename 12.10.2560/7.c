#include <stdio.h>
#include <string.h>
char a[100];
int x;
main()
{
    gets(a);
    int num=strlen(a);
    reverse(num-1);
}
void reverse(int num)
{
    if (num!=0)
    {
        printf("%c",a[num]);
        reverse(num-1);
    }
    else if(num==0)
        printf("%c",a[num]);
}
