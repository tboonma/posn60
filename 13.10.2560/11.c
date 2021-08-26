#include <stdio.h>
struct doll{
    char name[10];
}spe[1000];
int n,a=0,i,j,b=0,x=0;
main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",spe[i].name);
    for(i=0;i<n;i++)
    {
        a=0;
        for(j=i;j<n;j++)
        {
            if(strcmp(spe[i].name,spe[j].name)==0)
                a++;
        }
        if(a>b)
        {
            b=a;
            x=i;
        }
    }
    printf("%s",spe[x].name);
}
