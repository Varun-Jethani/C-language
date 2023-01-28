#include<stdio.h>
#include<conio.h>

int add();
void main(){
    printf("The Sum is %d",add());
    getch();
}

int add(){
    int a,b,sum;
    printf("Enter 2 numbers:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    return sum;
}