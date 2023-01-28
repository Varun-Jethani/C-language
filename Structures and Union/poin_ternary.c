#include<stdio.h>
#include<conio.h>

void main(){
    int a=110,b=20;
    int *pt=&a,*pt1=&b; //asignment operator '='
    *pt>*pt1?printf("%d",*pt):printf("%d",*pt1);
}