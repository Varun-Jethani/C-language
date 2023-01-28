#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
    int a,num,dig=0,rem=0,sum=0;
    printf("Enter a Number:");
    scanf("%d",&a);
    num=a;
    while (a>0){
        dig+=1;
        a/=10;
    }
    a=num;
    while (a>0){
        rem=a%10;
        sum+=pow(rem,dig);
        a/=10;
    }
    if (num==sum){
        printf("%d is an Armstrong Number.",num);
    }
    else{
        printf("%d is Not an Armstrong Number.",num);
    }
    getch();
}