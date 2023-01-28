#include<stdio.h>
#include<conio.h>
#include<math.h>

void armstrong(int n){
    int digs=0,cpyn=n,asum=0,d;
    while(cpyn>0){
        cpyn/=10;
        digs+=1;
    }
    cpyn=n;
    while(cpyn>0){
        d=cpyn%10;
        asum+=pow(d,digs);
        cpyn/=10;
    }
    if (asum==n){
        printf("%d is an Armstrong Number",n);
    }
    else{
        printf("%d is NOT an Armstrong Number",n);
    }
}

void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    armstrong(n);
    getch();
}