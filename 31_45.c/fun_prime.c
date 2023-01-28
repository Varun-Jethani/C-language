#include<stdio.h>
#include<conio.h>

int isprime(int n){
    int i, mid=n/2;
    for (i=2;i<=mid;i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}

void main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    if (isprime(n)==1){
        printf("%d is a Prime Number",n);
    }
    else{
        printf("%d is NOT a Prime Number",n);
    }
    getch();
}