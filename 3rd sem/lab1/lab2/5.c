#include<stdio.h>
#include<stdlib.h>

void nxt_grtest(int *arr,int n){
for (int i = 0; i <n; i++)
{
    int ng=-1;
    for (int j =i+1; j <n; j++)
    {
        if (arr[i]<arr[j])
        {
            ng=arr[j];
            break;
        }
        
    }
    printf("%d  |  %d\n",arr[i],ng);
}




}
int main(){
int n;
printf("enter size of array:");
scanf("%d",&n);

int *arr=(int*)malloc(n*sizeof(int));

printf("enter the array elements:");

for (int i = 0; i <n; i++)
{
    scanf("%d",&arr[i]);
}

nxt_grtest(arr,n);

return 0;
}