#include<stdio.h>
#include<conio.h>
int add(int,int);
void main(){
    int c,d;
    printf("Enter 2 Numbers:");
    scanf("%d %d",&c,&d);
    printf("Sum is : %d",add(c,d));
    getch();
}
int add(int a, int b){
    int sum;
    sum=a+b;
    return sum;
}
