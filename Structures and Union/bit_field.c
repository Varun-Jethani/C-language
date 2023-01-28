#include<stdio.h>
#include<conio.h>

struct StudentRecord{
    unsigned int age:3;
}S;

void main(){
    S.age=5;
    printf("Age is %d",S.age);
}
