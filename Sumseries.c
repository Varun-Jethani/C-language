#include<stdio.h>
#include<conio.h>

void main(){
    float sum,a,i;int n;
    printf("Enter The Value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=1/i;
        sum+=a;
    }
    printf("The Sum of series 1+1/2+1/3+...+1/%d is %f",n,sum);
    getch();
}