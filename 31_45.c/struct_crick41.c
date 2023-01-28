#include<stdio.h>
#include<conio.h>

struct Cric_Team{
    char name[40];
    int runs;
}C[11];

void main(){
    int i,tot=0,ex;
    printf("Enter the Details;\n");
    for (i=0;i<11;i++){
        if (i>0){
            gets(C[i].name);
        }
        printf("Enter The Name of Player %d :",i+1);
        gets(C[i].name);
        printf("Enter Runs Scored by %s :",C[i].name);
        scanf("%d",&C[i].runs);
        tot+=C[i].runs;
    }
    printf("Enter Extra runs:");
    scanf("%d",&ex);
    tot+=ex;
    printf("The total Runs Scored by team is %d",tot);
    getch();
}