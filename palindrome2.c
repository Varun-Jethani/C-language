#include<stdio.h>
#include<conio.h>

void main(){
    char str[99];int i,flag=0,len=0;
    printf("Enter a String:");
    gets(str);
    for (i=0;i<str[i];i++){
        len++;
    }
    for (i=0;i<len;i++){
        if (str[i]!=str[len-i-1]){
            flag=1;
            break;
        }
    }
    if (flag)
        printf("Entered String is not Palindrome");
    else
        printf("Entered String is a Palindrome");
    getch();
}