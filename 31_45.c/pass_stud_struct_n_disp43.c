#include<stdio.h>
#include<conio.h>

struct StudentData{
    int roll_no;
    char Name[40];
    int class;
};
void Display(struct StudentData Student){
    printf("Student details are :-\n\
    Roll No: %d\n\
    Name: %s\n\
    Class:%d",Student.roll_no,\
    Student.Name,\
    Student.class);
}
void main(){
    struct StudentData S;
    printf("Enter Student Name:");
    gets(S.Name);
    printf("Enter Student RollNo:");
    scanf("%d",&S.roll_no);
    printf("Enter Student Class:");
    scanf("%d",&S.class);
    Display(S);
    getch();
}