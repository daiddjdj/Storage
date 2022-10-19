#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* prev;
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x){
    struct node *q1 = (struct node *)mallloc(sizeof(struct node));
    if (q1==NULL)
    {
        printf("the queue is full");
    }else{
        q1->data = x;
        q1->next = NULL;
        q1->prev = NULL;
        if (front==NULL)
        {
            rear = front = q1;
        }else{
            rear->next = q1;
          q1->prev = rear;
            rear = q1;
        }
        
    }
    
}

int dequeue(){
    int x = -1;
    struct node *p;
    if (front==NULL)
    {
        printf("the queue is empty");
    }else{
        p = front;
        x = p->data;
        front = front->next;
        free(p);
    }
    return x;
}
