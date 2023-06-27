#include <stdio.h>
#define N 10

int stack[N];
int top = -1;

void push();
void display();
void pop();


void pop()
{
    if (top == -1)
    {
        printf("underFlow");
    }
    else
    {
        printf("element popped %d", stack[top]);
        top = top - 1;
    }
}

void push()
{
    int item;
    printf("Enter an element: ");
    scanf("%d", &item);
    top=top+1;
    stack[top] = item;
    printf("\n%d\n",top);
    printf("Data pushed successfully.\n");
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
        return;
    }

    printf("Elements in the stack:\n");
    for (int i = 0; i <= top; i++)
    {
        printf("Element %d: %d\n", i, stack[i]);
    }
}

int main(void)
{
    int choice;

    do
    {
        printf("Enter 1 to push data, 2 to display the data, or 3 to exit: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            display();
            break;

        case 3:
            printf("Exiting the program.\n");
            break;

        case 4:
            pop();
            break;

        default:
            printf("Invalid choice. Please enter a valid number.\n");
        }
    } while (choice != 3);

    return 0;
}
