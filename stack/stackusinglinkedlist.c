#include<stdio.h>
#include<stdlib.h>

struct stacknode{
    int data;
    struct stacknode *next;
};

struct stacknode* create_stack_node(int x){
    struct stacknode *node = (struct stacknode *)malloc(sizeof(struct stacknode));
    node->data = x;
    node->next = NULL;
    return node;
}

int isempty(struct stacknode* node){
    if(node==NULL){
        return 0;
    }else{
        return 1;
    }
}

void push(struct stacknode** stack,int d){
     printf("%d pushed into stack\n\n", d);
    struct stacknode *node = create_stack_node(d);
    node->next = *stack;
    *stack = node;
}

int pop(struct stacknode** stack){
  if(isempty(*stack)){
      return -1;
  }
  struct stacknode *temp = *stack;
  *stack = (*stack)->next;
  int v = temp->data;
  free(temp);
  return v;
}

int peek(struct stacknode* stack){
    if(isempty(stack)){
        return -1;
    }
    return stack->data;
}

void display(struct stacknode* stack){
    struct stacknode *node = stack;
    while (node!=NULL)
    {
        printf("%d -> ", node->data);
        node = node->next;
  }
}


int main(){
    struct stacknode *Stack;
    push(&Stack, 10);
    push(&Stack, 20);
     push(&Stack, 30);
      push(&Stack, 40);
     push(&Stack, 50);

     display(Stack);
     pop(&Stack);
     pop(&Stack);
     display(Stack);

     printf("%d", peek(Stack));
     return 0;
}
