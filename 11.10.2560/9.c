#include <stdio.h>
char a[4];
int i;
char L,O,V,E;
void main()
{
    scanf("%s",&a);
    for(i=0;i<=3;i++)
    {
        if(a[i]=='L')
            Llove();
        else if(a[i]=='O')
            Olove();
        else if(a[i]=='V')
            Vlove();
        else if(a[i]=='E')
            Elove();
    }
}
void Llove()
{
    printf("#\n#\n###\n");
    if(i!=3)
        printf("\n");
    return i;
}
void Olove()
{
    printf("###\n# #\n###\n");
    if(i!=3)
        printf("\n");
    return i;
}
void Vlove()
{
    printf("# #\n# #\n #\n");
    if(i!=3)
        printf("\n");
    return i;
}
void Elove()
{
    printf("###\n##\n###\n");
    if(i!=3)
        printf("\n");
    return i;
}
