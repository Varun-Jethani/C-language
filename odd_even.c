#include<stdio.h>
#include<conio.h>

void main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    if (n%2==0){
        printf("%d is an Even Number.",n);
    }
    else{printf("%d is an Odd Number.",n);}
    getch();
}