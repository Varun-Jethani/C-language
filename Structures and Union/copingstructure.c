#include<stdio.h>
#include<conio.h>

struct studentrecord{
    int rollno;
    char name[30];
};
void main(){
    struct studentrecord s1,s2;
    printf("Enter roll no:");
    scanf("%d",&s1.rollno);
    printf("Enter name:");
    scanf("%d",&s1.name);
    s2=s1;
    printf("roll no of s2 is %d",s2.rollno);

}