#include<stdio.h>
#include<conio.h>

void main(){
    int num,fib,a,b;
    a=0;
    b=1;
    fib=a+b;
    printf("Enter a Number:");
    scanf("%d",&num);
    printf("%d, %d",a,b);
    while (num>fib){
        printf(", ");
        printf("%d",fib);
        a=b;
        b=fib;
        fib=a+b;
    }
    printf(". \nis the Fibonacci series till number %d.",num);
    getch();
}
