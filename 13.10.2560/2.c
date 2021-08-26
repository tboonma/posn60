#include <stdio.h>
void main()
{
    char ch;
    FILE *ptrData;
    ptrData=fopen("student.txt","r");
    if(ptrData!=NULL)
    {
        while((ch=fgetc(ptrData))!=EOF)
            printf("%c",ch);
    }
    else
        printf("Open file error");
    fclose(ptrData);
}
