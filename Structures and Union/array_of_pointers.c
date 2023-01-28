#include<stdio.h>
#include<conio.h>

void main(){
    int * arrp[3],i;
    int a[3]={1,2,3};
    for (i=0;i<3;i++){
        arrp[i]=&a[i];
    }
    for (i=0;i<3;i++){
        printf("Address of %d is %p\n",*arrp[i],arrp[i]);
    }
    getch();
}