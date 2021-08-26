#include <stdio.h>
main()
{
    int x,y,i,j,temp=0;
    scanf("%d %d",&x,&y);
    char a[x+2][y+2];
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=y;j++)
            scanf(" %c",&a[i][j]);
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(a[i][j]=='S')
            {
                if(a[i+1][j]=='N')
                    temp++;
            }
            else if(a[i][j]=='E')
            {
                if(a[i][j+1]=='W')
                    temp++;
            }
        }
    }
    printf("%d",temp);
}
