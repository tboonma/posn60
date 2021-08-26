#include <stdio.h>
#include <stdlib.h>
main()
{
    int n,i;
    unsigned long long int j;
    char e;
    while(1)
    {
        j=1;
        printf("Enter number of factorial (maximum 50): ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            j=j*i;
        }
        printf("Total %d! is : %llu\n",n,j);
        printf("---------------------------\nPress a to Enter again\nPress any key to exit\n");
        scanf(" %c",&e);
        if(e=='a'||e=='A'||e==-65)
            system("cls");
        else
            break;
    }
}
