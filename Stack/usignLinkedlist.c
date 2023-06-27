#include <stdio.h>
#include<stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
struct stack *top = NULL;

void push();
void pop();
void display();

void push()
{
    struct stack *newNode;
    int item;
    newNode = (struct stack *)malloc(sizeof(struct stack));

    if (newNode == NULL)
    {
        printf("memory alloaction is failed");
    }
    else
    {
        printf("enter the element ");
        scanf("%d",&item);
        newNode->data = item;
        newNode->next = top;
        top = newNode;
    }
}

void pop(){
    if(top==NULL){
        printf("underFlow condition");
    }
    else{
    struct stack *temp;
    temp=top;
    top=top->next;
    free(temp);
    printf("element poped is successful");
}
}

void display()
{
    if (top == NULL)
    {
        printf("stack is empty");
    }
    else
    {

        struct stack *temp;
        temp = top;
        while (temp != NULL)
        {
            printf("\nelement is %d ", temp->data);
            temp = temp->next;
            
        }
    }
}

int main()
{
    int choice;
    do
    {
        printf("1 for pushed\n");
        printf("2 for display\n");
        printf("1 for pushed\n");
        printf("0 for exit");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            display();
            break;
            case 4:
            pop();
            break;


        default:
            printf("invalid key preshed");
            break;
        }
    } while (choice!= 0);

    return 0;
}