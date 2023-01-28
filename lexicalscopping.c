#include<stdio.h>
#include<conio.h>

void main(){
    auto int my_fun();
    my_fun();
    printf("\nMain Function");
    int my_fun(){
        printf("\nmy_fun function");
    }
    printf("\nDone");
}