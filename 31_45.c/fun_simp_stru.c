#include<stdio.h>
#include<conio.h>

void fun_nam(int); //this is function declation when function is defined after main.
// starts with returntype like void int etc.
//then fun_name identifier is declared 
// in parantysis parameters (passive arguement) that need to be passed are declared.

void main(){
    int n=10;
    printf("This is Outside the function. Number value is %d",n);
    fun_name(n);// Function Called with arguement n (actual arguement)
    printf("\nThis is back to outside of the function. Number Value is %d",n);
    getch();
}

void fun_name(int para){ //function definition
    printf("\nThis is inside the funtion. Number value is %d",para);
}