#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
    int a,b,res,c; char o,op;
    printf("Enter the opertaion to be Performed:");
    scanf("%c",&op);
    printf("Enter Number a:");
    scanf("%d",&a);
    printf("Enter a Number b:");
    scanf("%d",&b);
    
    switch (op){
        case '+':
            o='+';
            res=a+b;
            break;
        case '-':
            o='-';
            res=a-b;
            break;
        case '*':
            o='x';
            res=a*b;
            break;
        case '/':
            o='/';
            if (b!=0){
                res=a/b;
            }
            else{printf("Division by 0 not possible :-(");}
            break;
        case '%':
            o='%';
            if (b!=0){
                res=a%b;
            }
            else{printf("Division by 0 not possible :-(");}
            break;
        case '^':
            o='^';
            res=pow(a,b);
            break;
        default:
            printf("Undefined Operator.");
            break;
    }
    if (res){
        printf("%d %c %d = %d",a,o,b,res);
    }
    getch();

}