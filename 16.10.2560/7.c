#include <stdio.h>
#include <string.h>
main()
{
    char a[10],b[10];
    int num1,num2,i,j,blank,line;
    gets(a);
    gets(b);
    num1=strlen(a);
    num2=strlen(b);
    for(i=0;i<num1;i++)
    {
        for(j=0;j<num2;j++)
        {
            if(a[i]==b[j])
            {
                printf("%c",a[i]);
                blank=i+1;
                line=j-1;
                printf("%d",j);
            }
        }
    }
    for(i=0;i<blank;i++)
}
