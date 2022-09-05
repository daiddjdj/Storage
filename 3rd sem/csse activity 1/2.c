#include <stdio.h>
#include <stdlib.h>
void swap_col(int** arr, int n, int m){
    int a_097=n/2;
    for(int i=0;i<n;i++){
    int ce=n-1;
        for(int j=0;j<a_097;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[i][ce];
            arr[i][ce]=temp;
            ce--;
        }
    }
}
void swap_row(int** arr, int n, int m){
    int a_097=m/2;
    for(int j=0;j<a_097;j++){
        int re=m-1;
        for(int i=0;i<m;i++){
            int temp=arr[re][i];
            arr[re][i]=arr[j][i];
            arr[j][i]=temp;
            re--;
        }
    }
}


int main(){
    int n_097=0;
    printf("Enter the number of rows: ");
    scanf("%d", &n_097);

    int m_097=0;
    printf("Enter the number of columns: ");
    scanf("%d", &m_097);

    int** arr=(int**)malloc(n_097*sizeof(int*));
    printf("Enter the array elements: \n");
    for(int i=0;i<n_097;i++){
        arr[i]=(int*)malloc(m*sizeof(int));
        for(int j=0;j<m_097;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    swap_col(arr, n_097, m_097);
    swap_row(arr, n_097, m_097);
    for(int i=0;i<n_097;i++){
        for(int j=0;j<m_097;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;


}
