#include<stdio.h>
main(){
    int a;
    printf("Input your number :");
    scanf("%d",&a);
    if(a>10)
        printf("GOOD");
    else if(a<10)
        printf("BAD");
    else if(a==10)
        printf("OK");

}
