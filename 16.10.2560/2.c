#include <stdio.h>
#include <string.h>
main()
{
    char a[100];
    int num,i,j,k,l;
    gets(a);
    num=strlen(a);
    for(i=0;i<=num;i++)
    {
        j=i+1;
        k=i+2;
        l=i+3;
        if(a[i]=='l'||a[i]=='L')
        {
            if(a[j]=='o'||a[j]=='O')
            {
                if(a[k]=='v'||a[k]=='V')
                {
                    if(a[l]=='e'||a[l]=='E')
                       {
                            printf("%d",i);
                            break;
                       }
                }
            }
        }
        else if(i==num)
            printf("SINGLE");
    }
}
