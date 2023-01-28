#include<stdio.h>
#include<conio.h>

void main(){
    int num,pow,digs,a,i,numog,sum=0;
    printf("Enter the number:");
    scanf ("%d",&num);
    numog=num;
    digs=0;
    while (num>0){
        digs+=1;
        num/=10;
    }
    num=numog;
    while(num>0){
        a=num%10;
        pow=a;
        for (i=1;i<digs;i++){
            pow*=a;
        }
        sum+=pow;
        num/=10;
    }
    if (sum==numog){printf("%d is an Armstrong Number.",numog);}
    else{printf("%d is Not an Armstrong Number.",numog);}
    getch();
}