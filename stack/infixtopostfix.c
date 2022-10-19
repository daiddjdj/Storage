#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
char infix[MAX];
char postfix[MAX];


struct stacknode{
    char data;
    struct stacknode *next;
}*stack;

struct stacknode* createstack(char data){
    struct stacknode *stack = (struct stacknode *)malloc(sizeof(struct stacknode));
    stack->data = data;
    stack->next = NULL;
    return stack;
}

void push(char data){
    struct stacknode *Stack = createstack(data);
    Stack->next = (*stack);
    (*stack) = Stack;
}

int pop(struct stacknode** stack){
    struct stacknode *temp = (*stack);
    (*stack) = (*stack)->next;
    int val = temp->data;
    free(temp);
    return val;
}

void into_postfix(){
    char symbol,j=0;
    for (int i = 0; i < strlen(infix); i++)
    {
        symbol = infix[i];
        if((symbol>='A'&& symbol<='Z')|| (symbol>='a'&& symbol<='z')||(symbol>='0'&& symbol<='9')){
            postfix[j++] = symbol;
        }
        switch (symbol)
        {
        case'(':
            push(symbol);
            break;
         
        default:
            break;
        }
}

}
int main(){
    fgets(infix, MAX, stdin);
    into_postfix();
}
