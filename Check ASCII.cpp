#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    char e[1001],a;
    int i,temp,num;
    while(1)
    {
        temp=0;
        memset(e,NULL,sizeof e);
        printf("Enter the character to check (Maximum character is 1000): ");
        scanf("%s",&e);
        num=strlen(e);
        if(num>1000)
            printf("Error!");
        else
        {
            printf("ASCII number is : ");
            for(i=0;i<strlen(e);i++)
            {
                printf("%d ",e[i]);
                temp+=e[i];
            }
            printf("\nSummary is : %d",temp);
        }
        printf("\n----------------------------------\nPress a to check again\nPress any key to exit\n");
        scanf(" %c",&a);
        if(a=='a'||a=='A'||a==-65)
            system("cls");
        else
            break;
    }
}
