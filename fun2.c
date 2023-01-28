#include<stdio.h>
#include<conio.h>

void add(int,int);
void main(){
    int c,d;
    printf("Enter 2 Numbers:");
    scanf("%d %d",&c,&d);
    add(c,d);
    getch();
}

void add(int a,int b){
    int sum;
    sum=a+b;
    printf("Sum is: %d",sum);

}