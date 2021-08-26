#include <stdio.h>
struct problem{
    char name[15],hard[1];
    int t[1];
}pro1[20],pro2[20];
main()
{
    int a,b,i,j,x,y=0,k;
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++)
        scanf("%s %s",pro1[i].name,pro1[i].hard);
    for(i=0;i<b;i++)
    {
        scanf("%s",pro2[i].name);
        pro2[i].hard=='r';
    }
    for(j=0;j<b;j++)
    {
        for(i=0;i<a;i++)
        {
            if(strcmp(pro2[j].name,pro1[i].name)==0)
            {
                pro2[j].hard==pro1[i].hard;
                printf("%s\t",pro2[j].hard);
            }
        }
    }

}
