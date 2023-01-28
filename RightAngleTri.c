#include <stdio.h>
#include <conio.h>

void main() {
    int a,b,c,a2,b2,c2;
    printf("Enter the Three Sides of the Triangle:");
    scanf("%d,%d,%d",&a,&b,&c);
    a2=a*a;
    b2=b*b;
    c2=c*c;
    if((a2==b2+c2)||(b2==a2+c2)||(c2==b2+a2)){
        printf("The given sides make a Right Angle Triangle");
    }
    else{printf("The given sides don't make a Right Angle Triangle");}
    getch();
}