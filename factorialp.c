#include<stdio.h>
#include<conio.h>

void main(){
    int a,fact=1,i;
    printf("Enter a number to find its factorial:");
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        fact*=i;
    }    
    printf("%d!=%d",a,fact);
    getch();
}