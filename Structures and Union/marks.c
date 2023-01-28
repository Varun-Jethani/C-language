#include<stdio.h>
#include<conio.h>

struct studentmarks{
    int rollno;
    int marks[10];
}S;
void main(){
    int i,total=0;
    printf("Enter the roll no:");
    scanf("%d",&S.rollno);
    printf("Enter Student Marks");
    for (i=0;i<10;i++)
    {
        scanf("%d",&S.marks[i]);
        total+=S.marks[i];
    }
    printf("Total Marks of student is %d",total);
}