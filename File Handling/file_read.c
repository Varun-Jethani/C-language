#include<stdio.h>
#include<conio.h>

void main(){
    FILE *fp=NULL;
    char ch;
    fp=fopen("abc.txt","r");
    ch=fgetc(fp);
    printf("%c",ch);
    getch();
    int fclose(FILE *fp);
}
