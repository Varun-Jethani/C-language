#include<stdio.h>
#include<conio.h>

struct empdetails{
    int EmpID;
    char Name[40];
    char Desg[20];
    char Dept[20];
    int Sal;
}s;

void main(){
    printf("Enter the Employee ID:");
    scanf("%d",&s.EmpID);
    gets(s.Name);
    printf("Enter Name:");
    gets(s.Name);
    printf("Enter Designation:");
    gets(s.Desg);
    printf("Enter Department:");
    gets(s.Dept);
    printf("Enter Salary:");
    scanf("%d",&s.Sal);
    printf("Employee Details are:\n\
    Employee ID: %d \n\
    Name: %s \n\
    Designation: %s \n\
    Department: %s \n\
    Salary:Rs.%d",s.EmpID,s.Name,s.Desg,s.Dept,s.Sal);
    getch();
}