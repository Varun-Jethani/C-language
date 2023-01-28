#include<stdio.h>
#include<conio.h>

void fibonacci(int,int,int);

void main(){
    int n,x,y;
    printf("Enter a Number:");
    scanf("%d",&n);
    printf("0,1,");
    n-=2;
    fibonacci(n,0,1);
    getch();
}
void fibonacci(int n,int x,int y){
    if (n==1){
        printf("%d \n",x+y);
    }
    else{
        printf("%d,",x+y);
        fibonacci(n-1,y,x+y);
    }
}