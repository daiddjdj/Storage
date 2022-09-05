#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
}*first=NULL;

void create(int a[],int n){
    struct node *t,*last;
    int i;
    first=(struct node *)malloc(sizeof(struct node));
    first->data=a[0];
    first->prev=first->next=NULL;
    last=first;
    
    for(i=1;i<n;i++){
        t=(struct node *)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
    
}
void display(struct node *p){
    while(p->next!=NULL){
        printf("%d",p->data);
        printf(" ");
        p=p->next;
    }
}

int main(){
    int a[5]={1,3,4,5,7};
    create(a,5);
    display(first);
    return 0;
    
}
