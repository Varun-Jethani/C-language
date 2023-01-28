#include<stdio.h>
#include<conio.h>

void main(){
    int num,sum,a,numog;
    sum=0;
    printf("Enter an Integral Number:");
    scanf("%d",&num);
    numog=num;
    while (num!=0){
        a=num%10;
        sum=sum+a;
        num=num/10;
    }
    printf("The Sum of Digits of the number %d is %d",numog,sum);
    getch();
}