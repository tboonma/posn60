#include <stdio.h>
main(){
    int f,i=1,temp=1;
    scanf("%d",&f);
    for(i=1;i<=f;i++){
        temp=temp*i;      //temp*=i

    }
    printf("%d",temp);
}
