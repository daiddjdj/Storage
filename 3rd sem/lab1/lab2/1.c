#include<stdio.h>
#include<stdlib.h>


void reverse_the_numbers(int arr[],int n){
    int i=0,j=n-1,temp;
    while (i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    

}
int main(){
int *arr;
int n;
printf("enter the size of array:");
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));

printf("enter the elemrnts of the array:");
for (int i = 0; i <n; i++)
{
    scanf("%d",&arr[i]);
}

reverse_the_numbers(arr,n);

for (int i = 0; i <n; i++)
{
    printf("%d",arr[i]);
}

free(arr);


return 0;
}