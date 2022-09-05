#include <stdio.h>
#include <stdlib.h>
int Nonzero(int** arr, int n, int m){
    int a=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]=='0'){
                a++;
            }
        }
    }
    return (n*m)-a;
}

int Lead_diagonalSum(int** arr, int n){
    int add=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            add=add+arr[i][j];
        }
        printf("\n");
    }
    return add;
}

void Show_Minor(int**arr, int n){
    int k=1;
    printf("\nThe numbers are:\n");
    for(int i=1;i<n;i++){
        for(int j=n-k;j<n;j++){
            printf("%d ", arr[i][j]);
        }
        k++;
    }
}

int Product(int** arr, int n){
    int product=1;
    for(int i=0;i<n;i++){
        product=product * arr[i][i];
    }
    return product;
}
int main(){
b:
    int n=0;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    int m=0;
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    printf("Enter the elements of matrix:\n");
    int** arr=(int **) malloc(n * sizeof(int*));
    for(int i=0;i<n;i++){
        arr[i]=(int *) malloc(m * sizeof(int));
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &arr[i][j]);
        }
    }
c:
    int a=0;
    printf("\n1. Find the number of non-zero elements in array");
    printf("\n2. Find the Sum of elements above the lead diagonal(only available when rows=columns i.e n==m)");
    printf("\n3. Display the elements below the minor diagonal(n==m)");
    printf("\n4. Find the product of diagonal element(n==m)");
    printf("\nEnter any other number to exit");
    printf("\nEnter your choice: ");
    scanf("%d", &a);

    switch(a){
        case(1):
            int answer=Nonzero(arr, n, m);
            printf("\nThe number of nonzero elements is %d\n", answer);
            goto c;
        case(2):
            if(n==m){
                int answer1=Lead_diagonalSum(arr, n);
                printf("\nThe Sum above the lead diagonal is %d\n", answer1);
            }else{
               printf("Number of rows is not equal to columns please try again\n");
                goto b;
            }
            goto c;
        case(3):
            if(n==m){
                Show_Minor(arr,n);
            }else{
                printf("Number of rows is not equal to columns please try again\n");
                goto b;
            } 
            goto c;
        case(4):
            if(n==m){
                printf("\nThe Product is %d\n",Product(arr, n));
            }else{
                printf("Number of rows is not equal to columns please try again\n");
                goto b;
            }
            goto c;
        default:
            free(arr);
            printf("Thank You for using this program");
            exit(0);
    }

    return 0;
}