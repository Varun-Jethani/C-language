#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    char str[100];
    printf("Enter a String:");
    gets(str);
    printf("\nCurrent String is: %s",str);
    printf("\nReverse String is : %s",strrev(str));

}