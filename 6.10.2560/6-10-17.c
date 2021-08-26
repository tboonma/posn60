#include <stdio.h>
main(){
    int a,min=-9999,max=9999;
    for(;;){
        scanf("%d",&a);
        if (a==1001)
            break;
        if (min < a)
            min = a;
        if (max > a)
            max = a;
        }
        printf("%d",min-max);

    }


