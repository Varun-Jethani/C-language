#include<stdio.h>
#include<conio.h>
void main(){
    int i,a=0,j;
    char str[100];
    printf("Enter The String:");
    gets(str);
    printf("The Entered String is %s",str);
    for (i=0;str[i];i++){
        a+=1;
    }
    printf("\nThe Length of the string is %d",a);
    getch();
}
