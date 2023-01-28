#include<stdio.h>
#include<conio.h>

struct StudentRecord{
    int rollno;
    char name[20];
}S;
void printdisplay(struct StudentRecord Student);
void main(){
    printf("Enter Roll no of Student:");
    scanf("%d",&S.rollno);
    gets(S.name);
    printf("Enter Student Name: ");
    gets(S.name);
    printdisplay(S);
    getch();
}
void printdisplay(struct StudentRecord Student){
    printf("Student Details Are:\n\
    Roll no: %d \n\
    Name: %s",Student.rollno,Student.name);
}