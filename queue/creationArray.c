#include<stdio.h>
void push();
void pop();
void display();
#define N 10
int queue[N];
int rear=-1;
int front =-1;
void  push(){
if(rear==N-1){
    printf("overFlow condition");

}
else{
    if(front==-1){
        front=0;
    }
    rear=rear+1;
    printf("enter a number ");
    int item;
    scanf("%d",&item);
    queue[rear]=item;
}
}

void display(){
    for(int i=front; i<=rear;i++){
        printf("element %d is%d \n",i,queue[i]);
    }
}

void pop(){
    if(front==-1){
        printf("underFlow");
    }
    else{
        printf("element is deletted is successful");
        front=front+1;
    }
}
int main(){
    int choice;

    do
    {
    printf("enter your choice\n");
    printf("1 for push\n 2 for pop \n 3 for display\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        push();
        break;

        case 2:
        pop();
        break;

        case 3:
        display();
        break;
        default:
        printf("invalide numbe you enter try again");
    }
    } while (choice!=0);
    
    
}