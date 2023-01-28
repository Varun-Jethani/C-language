#include<stdio.h>
#include<conio.h>
void main(){
    int a=30,b=20;
    int *ptr,*ptr1;
    ptr=&a;
    ptr1=&b;
    if (ptr>ptr1){
        printf("Greater is %d",ptr);
    }
    else{
        printf("Greater is %d",ptr1);
    }
    getch();
}