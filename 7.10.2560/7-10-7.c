#include <stdio.h>
main()
{
    int x,y,i,j,k,l;
    scanf("%d %d",&x,&y);
    int a[x][y];
    for (i=0;i<=x-1;i++)
    {
        for(j=0;j<=y-1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (k=0;k<=x-1;k++)
    {
        for(l=0;l<=y-1;l++)
        {
            printf("%d ",a[l][k]);
        }
        printf("\n");
    }

}
