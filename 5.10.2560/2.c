#include <stdio.h>
main(){
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
    scanf("%d",&a);
    b=a/1000;
    c=a%1000;
    d=c/500;
    e=c%500;
    f=e/100;
    g=e%100;
    h=g/50;
    i=g%50;
    j=i/20;
    k=i%20;
    l=k/10;
    m=k%10;
    n=m/5;
    o=m%5;
    p=o;
    printf("1000 = %d\n",b);
    printf("500 = %d\n",d);
    printf("100 = %d\n",f);
    printf("50 = %d\n",h);
    printf("20 = %d\n",j);
    printf("10 = %d\n",l);
    printf("5 = %d\n",n);
    printf("1 = %d\n",p);
}
