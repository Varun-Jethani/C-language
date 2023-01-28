#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    char str[100];
    printf("Enter a String:");
    gets(str);
    printf("\nCurrent String is: %s",str);
    printf("\nLower Case String is : %s",strlwr(str));

}