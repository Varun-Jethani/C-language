#include<stdio.h>
#include<conio.h>
int add(int);
void main(){
    int n,sum;
    printf("Enter a Number:");
    scanf("%d",&n);
    sum=add(n);
    printf("Sum of %d numbers is %d",n,sum);
    getch();
}

int add(int n){
    if (n==1)
    return 1;
    else
    return n+add(n-1);
}
