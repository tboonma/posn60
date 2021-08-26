#include <stdio.h>
#include <stdlib.h>
struct node{
    int info;
    struct node *next;
};
struct node *first;
first=(struct node *)malloc(sizeof(struct node));
first -> info = 10; 	    // เข้าถึงตัวแปร info
first -> next = NULL;       //  เข้าถึงพอยน์เตอร์ next
