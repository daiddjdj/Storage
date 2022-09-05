#include <stdio.h>
#include <stdlib.h>
void multiply(int** input, int nRows, int nCols){
int i0_97, k0_97 = 0, l0_97 = 0; 
int a0_97=0;
int count0_97=0;
    while (k0_97 < nRows && l0_97 < nCols) { 
        if(count0_97%2==0){
            a0_97=2;
        }else{
            a0_97=-2;
        }
        count0_97++;
        for (i0_97 = l0_97; i0_97 < nCols; i0_97++) { 
            input[k0_97][i0_97]*=a0_97;
        } 
        k0_97++; 
  
        for (i0_97 = k0_97; i0_97 < nRows; i0_97++) { 
            input[i0_97][nCols-1]*=a0_97;

        } 
        nCols--; 
  
        if (k0_97 < nRows){ 
            for (i0_97 = nCols - 1; i0_97 >= l0_97; i0_97--) { 
                input[nRows-1][i0_97]*=a0_97;
            } 
            nRows--; 
        } 
  
        if (l0_97 < nCols){ 
            for (i0_97 = nRows - 1; i0_97 >= k0_97; i0_97--) { 
                input[i0_97][l0_97]*=a0_97;
            } 
            l0_97++; 
        } 
    } 
}
int main(){
    int n0_97=0;
    printf("Enter the number of rows: ");
    scanf("%d", &n0_97);

    int m0_97=0;
    printf("Enter the number of columns: ");
    scanf("%d", &m0_97);

    int** arr=(int**)malloc(n0_97*sizeof(int*));
    printf("Enter the array elements: \n");
    for(int i=0;i<n0_97;i++){
        arr[i]=(int*)malloc(m0_97*sizeof(int));
        for(int j=0;j<m0_97;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    multiply(arr, n0_97, m0_97);
    for(int i=0;i<n0_97;i++){
        for(int j=0;j<m0_97;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;


}
