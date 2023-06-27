#include<stdlib.h>
#include<stdlib.h>

struct queue{
    int data;
    struct queue *next;
};

struct queue *front,*rear;