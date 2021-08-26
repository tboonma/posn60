#include <stdio.h>
main(){
    int a,b,i,min=20000000,max=-20000000;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&b);
        if(min > b)
            min = b;
        if(max < b)
            max = b;
    }
    printf("%d %d",min,max);
}
