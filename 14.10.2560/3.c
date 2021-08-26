#include <stdio.h>
#include <stdlib.h>
struct node{
    int info;
    struct node *next;
};
struct node *head=NULL;
void add(int x)
{
    struct node *first;
    first=(struct node *)malloc(sizeof(struct node));
    first->info=x;
    first->next=NULL;
    if(head!=NULL)
    {
        struct node *temp = head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=first;
    }
    else
        head=first;
}
void insert(int pos,int x)
{
    struct = (struct node *)malloc(sizeof(struct node));
    first->info=x;
    first->next=NULL;
    if(head!=NULL)
    {
        struct *temp=head;
        int c;
        if(pos==0)
        {
            first->next=head;
            head=first;
        }
        else
        {
            for(c=0;c<pos-1;c++)
                temp=temp->next;
            first->next=temp->next;
            temp->next=first;
        }
    }
    else
        head=first;
}
