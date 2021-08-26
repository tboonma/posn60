#include <stdio.h>
#include <string.h>
struct subject{
    int id;
    char name[20];
    float wi,xi;
}sub[10];
int n,i;
float sum=0,wall=0;
main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&sub[i].id);
    scanf("%s",sub[i].name);
    scanf("%f",&sub[i].wi);
    scanf("%f",&sub[i].xi);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+(sub[i].wi*sub[i].xi);
        wall=wall+sub[i].wi;
    }
    printf("%.2f",sum/wall);
    for(i=0;i<n;i++)
    {
    if(sub[i].xi==0)
        printf("\n%s",sub[i].name);
    }
}
