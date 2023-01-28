#include<stdio.h>
#include<conio.h>

double Sin(float x){
    float res,a,ft=1;
    int i,j;
    res=x;
    a=-1;
    for (i=2;i<x;i+=2){
        for (j=1;j<=i;j++){
            ft*=j;
        }
        res+=(a*(x/(ft)));
        a*=-1;
    }
    return res;
    
}
void main(){
    float x;
    printf("Enter the Input for Sin function:");
    scanf("%f",&x);
    printf("sin(x) = %f",Sin(x));
    getch();
}

