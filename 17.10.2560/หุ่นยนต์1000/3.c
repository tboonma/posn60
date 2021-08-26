#include <stdio.h>
#include <string.h>
main()
{
    char a[100];
    gets(a);
    int num,i,x=0,y=0;
    num=strlen(a);
    for(i=0;i<num;i++)
    {
        if(a[i]=='N')
            y++;
        else if(a[i]=='E')
            x++;
        else if(a[i]=='S')
            y--;
        else if(a[i]=='W')
            x--;
        else if(a[i]=='Z')
        {
            x=0;
            y=0;
        }
    }
    printf("%d %d",x,y);
}
