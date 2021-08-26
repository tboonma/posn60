#include <stdio.h>
main(){
int s,e;
printf("input your salary = ");
scanf("%d",&s);
printf("input your expend = ");
scanf("%d",&e);
if(s>e*3){
    printf("GOOD");
}else{
    printf("BAD");
}
printf("\nYou have money left = %d",s-e);
}
