#include <stdio.h>
main()
{
    int x,y,i,j;
    scanf("%d %d",&x,&y);
    int a[x][y];
    for (i=0;i<=x-1;i++)
    {
        for(j=0;j<=y-1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        for (i=0;i<=y-1;i++)
        {
            for(j=0;j<=x-1;j++)
            {
                printf("%d ",a[j][i]);
            }
            printf("\n");
        }
}
