#include<stdio.h>
#include<stdlib.h>

struct poly{
int cof,exp;
};


void create_polyn(struct poly p1[],struct poly p2[],int n1,int n2){
    for (int i = 0; i <n1 ; i++)
    {
        scanf("%d %d",p1[i].cof,p1[i].exp);
    }
    for (int i = 0; i <n2 ; i++)
    {
     scanf("%d %d",p2[i].cof,p2[i].exp);
    }
}

void add_polyn(struct poly p1[],struct poly p2[],struct poly p3[],int n1,int n2){

for (int  i = 0; i <n1 ; i++)
{
    for (int j = 0; j <n2 ; j++)
    {
        if (p1[i].exp=p2[j].exp)
        {
            p3[i].cof=p2[j].cof+p1[i].cof;
        }
        
    }
    
}
}


void display(struct poly p3[],int n1){
    for(int i=0;i<n1;i++){
        printf("%d",p3[i]);
    }
}





int main(){
struct poly *p1,*p2,*p3;
int n1,n2;
scanf("%d %d",&n1,&n2);

p1=(struct poly*)malloc(n1*sizeof(struct poly));
p2=(struct poly*)malloc(n2*sizeof(struct poly));


if (n1>n2)
{
    p3=(struct poly*)malloc(n1*sizeof(struct poly));
}else{
    p3=(struct poly*)malloc(n2*sizeof(struct poly));
}

create_polyn(p1,p2,n1,n2);
add(p1,p2,p3,n1,n2);
display(p3,n1);


return 0;
}