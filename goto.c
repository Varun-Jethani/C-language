#include<stdio.h>
#include<conio.h>

void main(){
    int a,b;
    a=10;
    b=20;
    label: a=a+b;
    if (a<100){
        printf("%d",a);
        printf("\n");
        goto label;
    }

}