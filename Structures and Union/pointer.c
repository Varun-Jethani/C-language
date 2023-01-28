#include<stdio.h>
#include<conio.h>

void main(){
    int *ptr;
    int a=10;
    ptr=&a;
    printf("Value of a is %d",*ptr);
    printf("\nAddress of a is %u",ptr);
    getch();
}