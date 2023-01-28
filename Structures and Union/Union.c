#include<stdio.h>
#include<conio.h>

union StudentRecord{
    int rollno;
    char name[20];
}S;

void main(){
    printf("Enter rollno:");
    scanf("%d",&S.rollno);
    printf("Enter Name");
    scanf("%s",&S.name);
    printf("Student Details are: ");
    printf("\n Roll No: %d",S.rollno);
    printf("\nName: %s",S.name);
    getch();
}