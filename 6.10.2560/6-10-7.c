#include <stdio.h>
main(){
    int y;
    printf("Input year : ");
    scanf("%d",&y);
    if(y%4==0&&y%100!=0||y%400==0){
        printf("YES");
    }else{
    printf("NO");
    }
}
