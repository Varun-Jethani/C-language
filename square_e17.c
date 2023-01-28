#include<stdio.h>
#include<conio.h>

void main(){
    float a,asq;
    printf("Enter the Number to find its Square:");
    scanf("%f",&a);
    asq=a*a;
    printf("%f^2=%f",a,asq);
    getch();
}