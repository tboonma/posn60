#include<stdio.h>
main()
{
    int a;
    printf("Enter your age : ");
    scanf("%d",&a);
    if(a>=60){
        printf("You are old");
    }else{
        printf("You are young");
    }
    printf("\nGood bye");
}
