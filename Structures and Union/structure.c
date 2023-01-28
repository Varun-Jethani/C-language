#include<stdio.h>
#include<conio.h>

struct studentrecord
    {
        int rollno;
        char name[30];    
    }s1,s2;

void main(){
    /*structures are collection of variables having different datatype memory is allocated different for different varible
    Union is similar but memory is allocated same*/
    
    /*"struct studentrecord s1;" can also be use after ; 
    this structure defination can be done inside or outside main*/
    printf("Enter for s1 roll no:");
    scanf("%d",&s1.rollno);
    printf("Enter Name:");
    scanf("%s",&s1.name);
    printf("Enter roll no:");
    scanf("%d",&s2.rollno);
    printf("Enter Name:");
    scanf("%s",&s2.name);
    printf("\nS1 Roll no is %d",s1.rollno);
    printf("\nS1 Name is %s",s1.name);
    printf("\nS2 Roll no is %d",s2.rollno);
    printf("\nS2 Name is %s",s2.name);
}