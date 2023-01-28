#include<stdio.h>
#include<conio.h>

void main(){
    int **ptr1;
    int *ptr;
    int a=10;
    ptr=&a;
    ptr1=&ptr;
    printf("Value of a =%d",*ptr);
    printf("\nAdress of a =%p",ptr);
    printf("\nValue of double pointer =%d",**ptr1);
    printf("\nAddress of double pointer=%p",ptr1);
    getch();

}