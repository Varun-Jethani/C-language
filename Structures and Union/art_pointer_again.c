#include<stdio.h>
#include<conio.h>

void main(){
    int a=10,b=20;
    int *pt,*pt1;
    int add,sub;
    pt=&a;
    pt1=&b;
    add=*pt + *pt1;
    sub=pt-pt1;
    printf("Sum: %d",add);
    printf("\nDiff: %p",sub);
    getch();
}