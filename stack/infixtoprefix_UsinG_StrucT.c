#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Stack{
    int top;
    int maxsize;

    int *arr;
};

struct Stack* create(int size){
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->maxsize = size;
    stack->top = -1;
    stack->arr = (int *)malloc(stack->maxsize * sizeof(int));
    return stack;
}

void push(struct Stack* stack,char item){
    if (isFull(stack))
        return;
    stack->arr[++stack->top] = item;
}

int pop(struct Stack* stack){
    if (isEmpty(stack))
        return;
    return stack->arr[stack->top--];
}

int peek(struct Stack* stack){
    if (isEmpty(stack))
    {
        return INT_MIN;
    }else{
        return stack->arr[stack->top];
    }
    
}

int checkIFoperand(char s){
    if (s>='A' && s<='Z')
    {
        return 1;
    }else if (s>='a' && s<='z')
    {
        return 1;
    }else if (s>='0' && s<='9')
    {
        return 1;
    }else{

        return 0;
    }
    
    
    
}


int precedence(char s){

switch (s)
{
case '^':
    return 3;
    break;

case '*':
case '/':
    return 2;
    break;
case '+':
case '-':
    return 1;
    break;
default:
    return -1;
    break;
}

}





int intoPostfix(char* s){
    struct Stack *stack = create(strlen(s));
    int i, j;

      for (int i = 0; i <strlen(s); i++)
      {
        if (checkIFoperand(s))
        {
            s[j++] = s[i];
        }else if (s[i]=='(')
        {
            push(stack,s[i]);
        }else if (s[i]==')')
        {
            while(!isEmpty(stack) && peek(stack)!='('){
                s[j++] = pop(stack);
            }
               
            if (!isEmpty(stack) && peek(stack)=='(')
            {
                pop(stack);
            }
            

        }else{
          while (!isEmpty(stack) && precedence(peek(stack))>=precedence(s[i]))
          {
              s[j++] = pop(stack);
          }

          push(stack, s[i]);
        }
        
      }

      if(!isEmpty(stack)){
          s[j++] = pop(stack);
      }
      s[j++] = '\0';
}




void reverse(char* s){
  int n = strlen(s);
  int mid = n / 2;
  for (int i = 0; i<mid; i++)
  {
      char temp = s[i];
      s[i] = s[n - i - 1];
      s[n - i - 1] = temp;
  }
  
}

void brackets(char* s){
    int i = 0;
    for ( i = 0; s[i]!='\0'; i++)
    {
        if (s[i]=='(')
        {
            s[i] =')';
        }else if (s[i]==')')
        {
            s[i] = '(';
        }
        
        
    }
    
}

void infixTOprefix(char* str){
    reverse(str);

    brackets(str);

    intoPostfix(str);

    reverse(str);
}
int main(){
    char exp[] = "((a/b)+c)-(d+(e*f))";

    infixTOprefix(exp);
}