#include<stdio.h>
#include<conio.h>

void check(int n){
    if (n%2==0){
        printf("The Number is Even");
    }
    else
    printf("The Number is Odd");
}

void main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    check(n);
    getch();
}