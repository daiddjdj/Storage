#include<stdio.h>
#include<stdlib.h>


void searching_element(int arr[],int n,int x){
for (int i = 0; i <n; i++)
{
    if (x==arr[i])
    {
        printf("%d",arr[i]);
    }else{
        printf("invalid element");
    }
    
}
    
}





int main(){
    int n;
 printf("enter the size of array:");
 scanf("%d",&n);

int *arr=(int*)malloc(n*sizeof(int));

printf("enter the elements :");
for (int i = 0; i <n; i++)
{
    scanf("%d",&arr[i]);
}

int x;
printf("enter the number to be searched:");
scanf("%d",&x);

searching_element(arr,n,x);

return 0;
}