/*
LANG: C
COMPILER: WCB
*/
#include <stdio.h>
main(){
    int n,i,j=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        j=j*i;
        if(j>n){
            printf("%d",i-1);
            break;
        }

    }
}
