#include <stdio.h>
#include<limits.h>

int main() {
    // Write C code here
int arr[100];
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int max=INT_MIN,max2=INT_MIN;
for(int i=0;i<n;i++){
    int temp=max;
    if(arr[i]>max){
        max=arr[i];
          max2=temp;
    }else if(arr[i]>=max2 && arr[i]<max){
        max2=arr[i];
    }
    
}
printf("the max and max2 are:%d %d \n",max,max2);

int min=arr[0];
for(int i=0;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
}
}
int min2=INT_MAX;
for(int i=0;i<n;i++){
    if(arr[i]!=min && arr[i]<min2){
        min2=arr[i];
    }
}
printf("the min and min2 are:%d %d\n",min,min2);

return 0;
}