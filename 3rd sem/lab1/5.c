#include<stdio.h>
#define loop(i,n) for(int i=0;i<n;i++)
#define nl printf("\n")

int main(){

    int n,m;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    printf("Enter the number of subjects: ");
    scanf("%d",&m);

    struct students{
        char name[20],address[50];
        int rn;

        struct subjects{
            int marks;
        }ars[m];

    }arr[n];
    int i=0,j=0,sum=0;
    nl;

    loop(i,n){
        printf("Enter name of the student %d: ",(i+1));
        gets(arr[i].name);
        

        printf("Enter roll number of the student %d: ",(i+1));
        scanf("%d",&arr[i].rn);

        printf("Enter Address of the student %d: ",(i+1));
        gets(arr[i].address);


        loop(j,m){
        printf("Enter the marks %d of the student %d: ",(j+1),(i+1));
        scanf("%d",&arr[i].ars[j].marks);
        }
        nl;

    }

    loop(i,n){

        sum =0;

        printf("\nStudent's Name: %s",arr[i].name);
        printf("\nRoll Number: %d\n",arr[i].rn);
        

        loop(j,m){
        printf("Marks :%d",arr[i].ars[j].marks);
        sum = sum + arr[i].ars[j].marks;
        nl;
    }

        printf("Total sum of all :%d",sum);
        nl;
    }
    
    nl;

    printf("");

    return 0;
}