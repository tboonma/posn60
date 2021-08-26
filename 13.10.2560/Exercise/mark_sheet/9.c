#include <stdio.h>
#include <string.h>
struct score{
    int id,score1,score2,score3;
    char name[20];
}std[10];
int n,i,sum;
main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&std[i].id);
    scanf("%s",std[i].name);
    scanf("%d",&std[i].score1);
    scanf("%d",&std[i].score2);
    scanf("%d",&std[i].score3);
    }
    for(i=0;i<n;i++)
    {
    sum=std[i].score1+std[i].score2+std[i].score3;
    printf("%d ",std[i].id);
    printf("%s ",std[i].name);
    printf("%d",sum);
    printf("\n");
    }
}
