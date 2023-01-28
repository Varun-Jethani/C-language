#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
    int n,i;
    for (i=1;i<=10;i++){
        n=pow(i,3);
        printf("\n%d",n);
    }
    getch();
}