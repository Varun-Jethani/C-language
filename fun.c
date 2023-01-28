#include<stdio.h>
#include<conio.h>
void add();
void main(){
    add();
    getch();
}

void add(){
    int a,b,c;
    printf("Enter 2 numbers :");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("Answer is %d",c);
}