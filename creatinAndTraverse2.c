#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
    struct node *pre;

}

void create_node(int n);
void traverse_node(struct node* n);
