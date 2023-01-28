#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
    int n,nog,digs=0,Asum=0,i,a;
    printf("ENter a Number:");
    scanf("%d",&n);
    nog=n;
    for(i=0;n>0;i++){
        digs+=1;
        n/=10;
    }
    n=nog;
    for(i=0;n>0;i++){
        a=n%10;
        Asum+=pow(a,digs);
        n/=10;
    }
    if(Asum==nog){
        printf("%d is an Armstrong Number",nog);
    }
    else{
        printf("%d is Not an Armstrong Number",nog);
    }
    getch();
}