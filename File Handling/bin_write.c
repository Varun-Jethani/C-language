#include<stdio.h>
#include<conio.h>
struct student{
    int id;
    char name[30];
}S;

void main(){
    FILE *fp;
    fp=fopen("file.bin","w");
    printf("Enter Student Name:");
    gets(S.name);
    S.id=1;
    fwrite(&S,sizeof(S),1,fp);
}