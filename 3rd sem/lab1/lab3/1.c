#include<stdio.h>
#include<stdlib.h>


void replace(int arr[],int n,int arr1[]){


arr1[0]=arr[0]*arr[1];
for (int  i =1; i <n-1; i++){

arr1[i]=arr[i-1]*arr[i+1];

}
arr1[n-1]=arr[n-1]*arr[n-2];


}

int main(){
int n;
printf("enter array size:");
scanf("%d",&n);

int *arr=(int*)malloc(n*sizeof(int));
int *arr1=(int*)malloc(n*sizeof(int));


printf("enter array elements:");
    for (size_t i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }

replace(arr,n,arr1);


 for(int i=0; i<n; i++)
    {
        arr[i] = arr1[i];
    }


for (int i = 0; i <n; i++)
{
    printf("%d|",arr[i]);
}

free(arr);
return 0;
}