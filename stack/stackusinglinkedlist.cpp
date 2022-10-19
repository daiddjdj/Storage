#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node *top;
        Node(int x)
        {
            data = x;
            next = NULL;

      }
};

void push(Node** stack,int data){
    
    Node *stacknode = new Node(data);
    stacknode->next =(*stack);
    (*stack) = stacknode;
    printf("%d pushed in the stack\n", data);
}

void pop(Node** stack){
    Node *temp = (*stack);
    (*stack) = (*stack)->next;
    int val = temp->data;
    delete temp;
}

int peek(Node* stack){
    return stack->data;
}

void display(Node** stack){
  while((*stack)!=NULL){
      printf("%d -->", (*stack)->data);

      (*stack) = (*stack)->next;
  }
}

int main(){
    Node* Stacknode=NULL;
    push(&Stacknode, 10);
    push(&Stacknode, 94);
    push(&Stacknode, 4);
    push(&Stacknode,  7);
    display(&Stacknode);

    pop(&Stacknode);
    display(&Stacknode);


    return 0;
}