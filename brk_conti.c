#include<stdio.h>
#include<conio.h>

void main(){
    int a=5,b=10;
    while (a>0){
        if (b==0){
            break;
        }
        b-=1;
        printf("b: %d",b);
        printf("\n");
        if (a==10){
            continue;
        }
        a+=1;
        printf("a:%d",a);
        printf("\n");
    }
}