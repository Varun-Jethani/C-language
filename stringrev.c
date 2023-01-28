#include<stdio.h>
#include<conio.h>
void main(){
    int i,a=0,j;
    char str[100],rev[100];
    printf("Enter The String:");
    gets(str);
    printf("The Entered String is %s",str);
    for (i=0;str[i];i++){
        a+=1;
    }
    for (i=0;i<a;i++){
        rev[i]=str[a-i-1];    
    }
    rev[a]=str[a];
    printf("\nThe reversed string is: %s",rev);
    getch();
}

