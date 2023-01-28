#include<stdio.h>
#include<conio.h>

struct studentrecord{
    int rollno;
    char name[30];
}S[10];

void main(){
    int i;
    printf("Enter Student Details\n");
    for (i=0;i<=5;i++){
        printf("Enter Student %d roll no: ",i+1);
        scanf("%d",&S[i].rollno);
        printf("Enter Name:");
        scanf("%s",&S[i].name);
    }
    printf("\nDisplaying student details");
    for (i=0;i<=5;i++){
        printf("\nStudent %d:-\tRoll no: %d,\tName:%s ",i+1,S[i].rollno,S[i].name);
    }
    getch();

}