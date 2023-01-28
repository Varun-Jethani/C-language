#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char str[99];
    printf("Enter a String:");
    gets(str);
    printf("\nThe Length of the string '%s' is %d\n",str,strlen(str));
    getch();
}