#include<stdio.h>
#include<stdlib.h>


int main(){
int n,k;
printf("enter array size:");
scanf("%d",&n);

int *arr=(int*)malloc(n*sizeof(int));

printf("enter array elements:");

for (int i = 0; i <n; i++)
{
    scanf("%d",&n);

}

printf("enter k value:");
scanf("%d",&k);


for (int i = 0; i <n-1; i++)
{
    for (int j = 0; j<n-1-i; j++)
    {
        if (arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        
    }
    
}

printf("largest element:%d\n",arr[n-k]);
    printf("smallest element:%d\n",arr[k-1]);

    




return 0;
}