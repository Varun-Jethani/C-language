#include<stdio.h>
#include<conio.h>

int square(int n){
    return n*n;
}

void main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    printf("Square of the %d is %d",n,square(n));
    getch();
}
