#include <stdio.h>
main(){
    int i,sum=0;
    for(i=2;i<=10;i+=2){
        printf("i = %d \n",i);
        sum=sum+i;
    }
    printf("%d",sum);
}
