#include <stdio.h>
main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b+c!=100)
        printf("BUG");
    else if(a>b&&a>c)
        printf("PAPER");
    else if(b>a&&b>c)
        printf("SCISSORS");
    else if(c>a&&c>b)
        printf("ROCK");
    else if(a==b||a==c||c==b)
        printf("I DON'T KNOW");
}
