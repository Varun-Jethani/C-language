#include<stdio.h>
#include<conio.h>

void main(){
    int a,b,c,d;
    printf("Enter Three Nummbes:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            d=a;
        }
        else{d=c;}

    }
    else{
        if(b>c){d=b;}
        else{d=c;}
    }
    printf("The Greatest Number is %d",d);
    getch();
    
}
