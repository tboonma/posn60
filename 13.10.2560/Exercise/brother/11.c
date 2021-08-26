#include <stdio.h>
struct doll{
    char name[10];
    int t;
}spe[1000];
int n,a=0,i,j,b=0,x;
main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",spe[i].name);
        spe[i].t=0;
    }
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
