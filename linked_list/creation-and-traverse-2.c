#include <stdio.h>
#include <stdlib.h>
struct node

{
    int data;
    struct node *next; /* data */
    struct node *pre;  /* data */
};

void createnode(int n, struct node *x);
void traversenode(struct node *x);

int main()
{
    int n;
    struct node *first, *newnoode, *temp;
    first = (struct node *)malloc(sizeof(struct node));
    printf("enter the size of list");
    scanf("%d", &n);
    printf("enter the value of node:%d", 1);
    scanf("%d", first->data);
    first->next = NULL;
    first->pre = NULL;
    createnode(n, first);
    traversenode(first);
}
void createnode(int n, struct node *first)
{
    struct node *newnode, *temp;
    int i;
        newnode = (struct node *)malloc(sizeof(struct node));
    temp = first;
    for (i = 2; i < n; i++)
    {
        printf("enter the value of node:%d", i);
        scanf("%d", newnode->data);
        newnode->next = NULL;
        newnode->pre = temp;
        temp->next=newnode;
        temp=temp->next;
    }
}
void traversenode(struct node*first){
    struct node* temp;
    temp=first;
   while(temp!=NULL){
        printf("node %d :",temp->data);
        temp=temp->next;
    }
}