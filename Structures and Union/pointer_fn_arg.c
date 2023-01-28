#include<stdio.h>
#include<conio.h>

int *getMax(int*,int*);

void main(){
    int x,y,*max;
    printf("Enter 2 values:");
    scanf("%d %d",&x,&y);
    max=getMax(&x,&y);
    printf("Max value:%d\n",*max);
    getch();
}

int *getMax(int *m,int *n){
    if(*m>*n){
        return m;
    }
    else{
        return n;
    }
}
