#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char str[99],copy[99];
    printf("Enter a String:");
    gets(str);
    strcpy(copy,str);
    printf("\nEntered String is '%s', and copied string is '%s'",str,copy);
    getch();
}