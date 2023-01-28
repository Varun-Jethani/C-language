#include<stdio.h>
#include<conio.h>
struct Distance{
    int feet;
    int inches;
}d1,d2,sum;
void input(int *x, int *y){
    int dist;
    printf("Enter Distance in 'Feet inches':");
    scanf("%d %d",x,&dist);
    while (dist>=12){
        dist-=12;
        *x+=1;
    }
    *y=dist;
}
void main(){
    input(&d1.feet,&d1.inches);
    input(&d2.feet,&d2.inches);
    sum.feet = d1.feet + d2.feet;
    int inch = d1.inches + d2.inches;
    while (inch>=12){
        inch-=12;
        sum.feet+=1;
    }
    sum.inches=inch;
    printf("Total is %d Feet and %d Inches",sum.feet,sum.inches);
    getch();
}