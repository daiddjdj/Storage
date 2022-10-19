#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int front;
    int rear;
    int *arr;
};

void create(struct queue* q1,int size){
    q1 = (struct queue *)malloc(sizeof(struct queue));
    q1->size = size;
    q1->front = q1->rear = 0;
    q1->arr = (int *)malloc(q1->size * sizeof(int));
}

void enqueue(struct queue *q1,int item){
    if (q1->front==q1->rear)
    {
        printf("queue is full");
    }else{
        q1->arr[q1->rear++] = item;
    }
}

int dequeue(struct queue* q1){
    if (q1->front==q1->rear)
    {
        printf("queue is empty");
    }

    return q1->arr[q1->front++]; 
}

void display(struct queue *q1){

    int i = q1->front;
    while (i<q1->rear)
    {
        printf("%d", q1->arr[i]);
        i++;
    }
    
      
    
}

int main(){
    struct queue q1;
    int s;

    printf("enter size of queue");

    scanf("%d", &s);

    create(&q1, s);

    int pole = 1;

    while (pole)
    {
        printf("enter the number");
        scanf("%d", &pole);

        switch (pole)
        {
        case 1:
            int item;
            printf("enter the number you want to insert\n");
            scanf("%d", &item);
            enqueue(&q1, item);
            break;
        case 2:
            int d=dequeue(&q1);
            printf("%d is removed from queue\n", d);
        case 3:
            printf("display queue\n");
            display(&q1);

        default:
            printf("entered wrong number,pls try again");
            break;
        }
    }
    return 0;
}