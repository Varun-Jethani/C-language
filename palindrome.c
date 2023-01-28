#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    char stri[99];
    printf("Enter a String :");
    gets(stri);
    char rev[99];
    strcpy(rev,stri);
    strrev(rev);
    printf("Reverse String is %s",rev);
    if (strcmp(stri,rev)==0){
        printf("\nPalindrome");
    }
    else
        printf("\nNot Palindrome");
    getch();
}