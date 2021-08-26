#include <stdio.h>
void main()
{
    char ch;
    int num;
    FILE *ptrData;
    ptrData=fopen("student.txt","w");
    if(ptrData!=NULL)
    {
        printf("Type words (<enter> to exit) ->");
        while((ch=getchar())!='\n')
        {
            fputc(ch,ptrData);
        }
    }
    else
        printf("Open file error");
    fclose(ptrData);
}
