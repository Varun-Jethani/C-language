#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char st[99]; int vow=0,i,j;
    char vowe[18]="aeiouAEIOU";
    printf("Enter the String:");
    gets(st);
    for(i=0;i<strlen(st);i++){
        for(j=0;j<10;j++){
            if (st[i]==vowe[j]){
                vow+=1;
                break;
            }
        }
            
    }
    printf("The Number of Vowels is %d.",vow);
    getch();
}