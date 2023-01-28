#include<stdio.h>
#include<conio.h>

void swap(int,int);
void main(){
    int a,b;
    printf("Enter 2 Numbers:");
    scanf("%d %d",&a,&b);
    printf("Before Swapping a:%d and b:%d",a,b);
    swap(a,b);
    printf("After Swapping in Main a:%d and b:%d",a,b);
    getch();
}

void swap(a,b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping in Function a:%d and b:%d",a,b);
}