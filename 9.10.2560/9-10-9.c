#include <stdio.h>
main()
{
    char a[8];
    int sum;
    scanf("%c %c %c %c %c %c %c %c",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7]);
    sum=(a[0]-48)*128+(a[1]-48)*64+(a[2]-48)*32+(a[3]-48)*16+(a[4]-48)*8+(a[5]-48)*4+(a[6]-48)*2+a[7]-48;
    printf("(%d*128)+(%d*64)+(%d*32)+(%d*16)+(%d*8)+(%d*4)+(%d*2)+(%d*1) = %d",a[0]-48,a[1]-48,a[2]-48,a[3]-48,a[4]-48,a[5]-48,a[6]-48,a[7]-48,sum);
}
