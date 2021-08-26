#include <stdio.h>
#include <string.h>
char a[100];
int x=0,y=0;
main()
{
    gets(a);
    int num=strlen(a);
    check(y,num-1);
    if(x==0)
        printf("Yes");
    else
        printf("No");
}
void check(int y,int num)
{
    if(y<=num-y)
    {
        if(a[y]!=a[num-y])
        {
            x++;
        }
        check(y+1,num);
    }
}
