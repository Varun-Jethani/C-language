#include<stdio.h>
#include<conio.h>

void swap(int*x,int*y);

void main(){
    int a,b;
    printf("Enter two number a and b:");
    scanf("%d %d",&a,&b);
    printf("Values Before Swapping \na: %d and b:%d",a,b);
    swap(&a,&b);
    printf("\nValues After Swapping \na: %d and b:%d",a,b);
    getch();
}

void swap(int *x,int *y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
