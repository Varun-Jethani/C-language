#include<stdio.h>
#include<conio.h>
#include<math.h>

int fact(int n){
    int f=1,i;
    for (i=1;i<=n;i++){
        f*=i;
    }
    return f;
}

void main(){
    int i,n=1,xog;
    float x,sin=0;
    printf("Enter Angle in degrees:");
    scanf("%f",&x);
    xog=x;
    while (x>=360){
        x-=360;
    }
    x*=(float)3.14/180;
    for (i=0;i<=5;i++){
        sin+=(float)(pow(-1,i)*pow(x,n)/fact(n));
        n+=2;
    }
    printf("\nsin(%d)=%f",xog,sin);
    getch();   
}