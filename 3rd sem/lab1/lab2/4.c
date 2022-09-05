#include<stdio.h>
#include<stdlib.h>

void sort_array(int arr[],int n){
for (int i = 0; i <n; i++)
{
    for (int j = 0; j <n-i-1; i++)
    {
      if (arr[j+1]>arr[j])
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
printf("enter the size of the array:");
scanf("%d",&n);

int *arr=(int*)malloc(n*sizeof(int));

printf("enter the elements:");
for (int i = 0; i <n; i++)
{
    scanf("%d",&arr[i]);
}

int a,b,count=0;
scanf("%d %d",&a,&b);
for (int  i = 0; i <n; i++)
{
    if (arr[i]>=a && arr[i]<=b)
    {
        count++;
    }
    
}
printf("the numbers between a and b are:%d",count);

sort_array(arr,n);

count=0;

for (int  i = 0; i <n; i++)
{
    if (arr[i]>=a && arr[i]<=b)
    {
        count++;
    }
    
}

printf("the numbers between a and b are:%d",count);




return 0;
}