#include <stdio.h>
void main()
{
    char ch;
    int num;
    FILE *ptrData;
    ptrData=fopen("student.txt","r");
    if(ptrData!=NULL)
    {
        while(feof(ptrData)==0)
        {
            fscanf(ptrData,"%c %d",&ch,&num);
            if(ch=='C')
                printf("Your room is %c%d",ch,num);
        }
    }
    else
        printf("Open file error");
    fclose(ptrData);
}
