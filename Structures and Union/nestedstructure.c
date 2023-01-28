#include<stdio.h>
#include<conio.h>


struct studenentrecord{
    int rollno;
    struct date{
        int day;
        int month;
        int year;
    }dob;
}S;

void main(){
    printf("Enter Student Roll No:");
    scanf("%d",&S.rollno);
    printf("Enter Date in DD MM YYYY format:");
    scanf("%d %d %d",&S.dob.day,&S.dob.month,&S.dob.year);
    printf("\nStudent Details are;");
    printf("\nRoll no is: %d",S.rollno);
    printf("\nDOB is %d/%d/%d",S.dob.day,S.dob.month,S.dob.year);
    getch();
}