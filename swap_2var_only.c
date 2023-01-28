#include<stdio.h>
#include<conio.h>

void main(){
    int a,b;
    printf("Enter 2 numbers:");
    scanf("%d %d",&a,&b);
    printf("\nNumbers before Swapping are a:%d, b:%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nNumbers after Swapping are a:%d, b:%d",a,b);
    getch();
}