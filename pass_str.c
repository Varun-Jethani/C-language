#include<stdio.h>
#include<conio.h>
void display(char str[]);
void main(){
    char str[50];
    printf("Enter a string:");
    gets(str);
    display(str);
    getch();
}

void display(char str[]){
    printf("String is :");
    puts(str);
}