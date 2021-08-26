#include <stdio.h>
void main()
{
    char ch;
    int num;
    FILE *ptrData;
    ptrData=fopen("student.txt","w");
    if(ptrData!=NULL)
    {
        fprintf(ptrData,"Hello class %d",1);
    }
    else
        printf("Open file error");
    fclose(ptrData);
}
