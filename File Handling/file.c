#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){
FILE *fp=NULL;
int a=10;
char c='v';
char str[50]="Kyzo ko oni oreva naru";
fp=fopen("abc.txt","w");
if (fp==NULL){
    printf("Error");
    exit(1);
}

fprintf(fp,"%s %c %d",str,c,a);
int fclose(FILE *fp);
getch();
}