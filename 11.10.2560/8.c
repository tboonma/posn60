#include <stdio.h>
int x,y,z,i,j,k;
void main()
{
    char a[15];
    scanf("%s",&a);
    if(a[0]=='r')
        rectAngle();
    if(a[0]=='t')
        triAngle();

}
void rectAngle()
{
    scanf("%d %d %d",&x,&y,&z);
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=3;j++)
        {
            for(k=1;k<=y;k++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
}
void triAngle()
{
    scanf("%d %d",&x,&y);
    for(k=1;k<=x;k++)
    {
        for(i=1;i<=y;i++)
        {
            for(j=i+1;j<=y;j++)
                printf(" ");
            for(j=1;j<i*2;j++)
                printf("*");
            printf("\n");
        }
        printf("\n");
    }
}
