#include<iostream>
using namespace std;
#define size 5
class Queue{
   
    int items[size];
    int front, rear;

public:
Queue(){
     front = -1, rear = -1;}

    int isFULL();
    int isEmpty();
    void Enqueue(int);
    int Dequeue();
    void display();
};

int Queue::isFULL(){
    if ((front = rear + 1) || (front ==0 && rear == size - 1))
    {
        return 1;
    }
    return 0;
}

int Queue::isEmpty(){
    if(front ==-1){
        return 1;
    }
    return 0;
}

void Queue::Enqueue(int element){
    if (isFULL())
    {
        printf("Queue is full\n");
    }else{
        if (front==-1)
        {
            front = 0;
        }
        rear = (rear + 1) % size;
        items[rear] = element;
        printf("\nInserted->%d", element);
    }
    
}

int Queue::Dequeue(){
    int e;
    if(isEmpty()){
        printf("the queue is empty");
        return -1;
    }else{
        e = items[front];
        if (front==rear)
        {
            front = rear = -1;
        }else{

            front = (front + 1) % size;
        }
        return e;
    }
}

void Queue::display(){
    int i;
    for ( i = front; i != rear; i = (i + 1) % size)
    {
        printf("%d", items[i]);

}

printf("%d", items[i]);

}


int main(){
    Queue q1;
    q1.Enqueue(1);
     q1.Enqueue(2);
      q1.Enqueue(3);
       q1.Enqueue(4);

       q1.display();

       printf("%d", q1.Dequeue());

       q1.display(); 
}