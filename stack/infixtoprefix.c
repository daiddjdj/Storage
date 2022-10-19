#include<stdio.h>
#include<string.h>
#include<limits.h>
#define MAX 100

int top = -1;
char stack[MAX];

int isfull(){
   if(top==MAX-1){
       return 1;
   }else{
       return 0;
   }
}

int isempty(){
    if (top==-1)
    {
        return 1;
    }else{
        return 0;
    }
    
}
 
 void push(char i){
    if(isfull())
        return INT_MIN;
    stack[++top] = i;
 }

 int pop(){
if (isempty(stack)){
    return INT_MIN;
}

return stack[top--];
 }

 int peek(){
    if(isempty()){
        return INT_MIN;
    }

    return stack[top];
 }



int precedence(char c){
switch (c)
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

int checkIFoperand(char ch){
    if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        return 1;
    }else{
        return 0;
    }
    
}

int postfix(char* expression){
    int i = 0, j =0;
    int n = strlen(expression);
    for ( i = 0;i<n; i++)
    {
        if (checkIFoperand(expression[i]))
        {
            expression[j++] = expression[i];
        }else if(expression[i]=='('){

            push(expression[i]);
        }else if(expression[i]==')'){
            while (!isempty(stack) && peek(stack)!='(')
            {
                expression[j++] = pop(stack);
            }

            if(!isempty(stack) && peek(stack)=='('){
                pop(stack);
            }
            
        }else{
           while (!isempty(stack) && precedence(peek(stack))>=precedence(expression[i]))
           {
               expression[j++] = pop(stack);
           }
           push(expression[i]);
                }
        
    }
    

}

void reverse(char *t){
    int n = strlen(t);
    int mid = n / 2;
    for (int i = 0; i <mid; i++)
    {
        int temp = t[i];
        t[i] = t[n - i - 1];
        t[n - i - 1] = temp;
    }
    
}

void brackets(char* t){
    int i = 0;
    while (t[i]!='\0')
    {
        if (t[i]=='(')
            t[i] = ')';
        else if(t[i]=='(')
            t[i] = '(';

        i++;
    }
    
}

void into_prefix(char* t){
    reverse(t);
    brackets(t);

    postfix(t);

    reverse(t);
}


int main(){
    char s[] = "(a/b)+c-d+(e*f)";
    printf("%s\n", s);

    into_prefix(s);

     printf("%s\n", s);

    return 0;
}