#include<stdio.h>
#include<stdlib.h>

void sort_array(int arr[],int n){
    for (int i = 0; i <n-1; i++)
    {
       for (int j = 0; j <n-i-1; i++){
      if (arr[j]>arr[j+1])
      {
        int red=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=red;
      }
      
       
    }
    
}


}
int main(){
int n;
printf("enter the size of the array");
scanf("%d",&n);

int *arr=(int*)malloc(n*sizeof(int));

printf("enter the elements:");
for (int i = 0; i <n; i++)
{
    scanf("%d",&arr[i]);
}

sort_array(arr,n);


for (int i = 0; i <n; i++)
{
    printf("%d",arr[i]);
}



return 0;
}