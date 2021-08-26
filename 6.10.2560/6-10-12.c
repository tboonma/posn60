#include <stdio.h>
main(){
    int num,sum,n;
    sum=n=0;
    printf("Enter number \n(0 = End) : ");
    scanf("%d",&num);
    while(num!=0){
        printf("num = %d \n",num);
        sum=sum+num;
        n++;
        printf("Enter number : ");
        scanf("%d",&num);
    }
    printf("AVG. = %d",sum/n);
}
