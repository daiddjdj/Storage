#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct employee{
    char id[10];
    char name[100];
    char address[1000];
    unsigned long int age;
    unsigned long int salary
         
};


void sort(struct employee arr[], int n){
    char alpha[1000];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(strcmp(arr[i].name, arr[j].name)>0){
                strcpy(alpha, arr[i].name);
                strcpy(arr[i].name, arr[j].name);
                strcpy(arr[j].name,alpha);
            }
        }
    }
}
int main(){
    int n=0;
    printf("Enter the number of employee: ");
    scanf("%d", &n);

    struct employee* arr=(struct employee*) malloc(n * sizeof(struct employee));
    for(int i=0;i<n;i++){
        printf("Enter the employee id: ");
        scanf("%s", arr[i].id)
;
        printf("Enter the employee name: ");
        fgets(arr[i].name, 100, stdin);

        printf("Enter the employee's address: ");
        fgets(arr[i].address, 1000, stdin);

        printf("Enter the employee age: ");
        scanf("%d", &arr[i].age);

        printf("Enter the employee salary: ");
        scanf("%d", &arr[i].salary);
    }

    sort(arr, n);

    for(int i=0;i<n;i++){
        printf("The Name of employee is %s, wiht ID %s\n", arr[i].name, arr[i].id);
        printf("Employees address is %s\n", arr[i].address);
        printf("Employees age is %d\n", arr[i].age);
        printf("Employees salary is %d\n", arr[i].salary);
    }
    return 0;
}