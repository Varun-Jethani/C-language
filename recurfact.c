#include<stdio.h>
#include<conio.h>
int fact(int);
void main(){
    int n,f;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d!=%d",n,fact(n));
    getch();
}

int fact(int n){
    if (n==1){
        return 1;
    }
    else {
        return n*fact(n-1);
    }
}