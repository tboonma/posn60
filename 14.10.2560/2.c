#include <stdio.h>
#include <stdlib.h>
struct node{
    int info;
    struct node *next;
};
struct node *first;
first=(struct node *)malloc(sizeof(struct node));
first -> info = 10; 	    // ��Ҷ֧����� info
first -> next = NULL;       //  ��Ҷ֧��¹����� next
