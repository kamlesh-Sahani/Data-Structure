#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    /* data */
};
void create_node(int n);
void traverse_node(struct node* n);


int main(){
int n;
printf("Enter a size of nodes");
scanf("%d",&n);

create_node(n);

}


void create_node(int n){
    int i,val;

    struct node *head,*temp,*newnode;
head=(struct node*)malloc(sizeof(struct node));
if(head==NULL){
    printf("unable to alocate memory");
}
else{
    printf("enter the value of first node");
    scanf("%d",&val);

    head->data=val;
    head->next=NULL;
}
temp=head;
    for(i=2;i<=n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));

        if(newnode==NULL){
            printf("unableto allocate memory");
        }
        else{
            printf("enter the value of node:%d",i);
            scanf("%d",&val);
            newnode->data=val;
            newnode->next=NULL;
            temp->next=newnode;
            temp=temp->next;
        }
    }
traverse_node(head);

}
    void traverse_node(struct node *head){
        struct node *temp;
        temp=head;
        while(temp!=NULL){
            printf("value is %d\n",temp->data);
            temp=temp->next;
        }
    }

