// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct student{
    char name[100];
    long int rollno;
    int marks;
};
 void enter_stu_details(struct student st[]){
        printf("enter name of student:");
        fgets(st[0].name,100,stdin);
        printf("enter the rollno of the student");
        scanf("%ld",&st[0].rollno);
        printf("enter marks of student:");
        scanf("%d",&st[0].marks);
        
    }
    
    void display_stu_details(struct student st[]){
        printf("student name:");
        puts(st[0].name);
        printf("student roll no:%ld\n",st[0].rollno);
        printf("student marks:%d",st[0].marks);
    }
int main() {
    // Write C code here
    struct student st[1];
    enter_stu_details(st);
    display_stu_details(st);
    

    return 0;
}