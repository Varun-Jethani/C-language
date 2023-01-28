#include<stdio.h>
#include<conio.h>
#include<string.h>

struct books{
    int Num;
    char Name[60];
    char author[40];
    char genre[40];
    int pages;
    char publisher[60];
}B[1000];

void main(){
    int i=0,op,j;
    printf("Library Management\n");
    while (1){
        printf("\nYour Options Are:-\n\
    1.Add Books.\n\
    2.Display Existing Books.\n\
    3.Displaying Boooks of an author.\n\
    4.Find Total Books.\n\
    0. Exit.");
        printf("\nEnter Your Option:");
        scanf("%d",&op);
        if (op==0)
            break;
        else if (op==1){
            printf("\nEnter The books Details;\n");
            printf("Enter Serial Number:");
            scanf("%d",&B[i].Num);
            printf("Enter Name:");
            gets(B[i].Name);
            gets(B[i].Name);
            printf("Enter the Author:");
            gets(B[i].author);
            printf("Enter Genre:");
            gets(B[i].genre);
            printf("Enter Pages:");
            scanf("%d",&B[i].pages);
            printf("Enter Publisher:");
            gets(B[i].publisher);
            gets(B[i].publisher);
            i++;
        }
        else if(op==2){
            printf("\nThe Following Books are Available:- \n");
            for (j=0;j<i;j++){
                printf("\n\
            Serial No:%d \n\
            Name:%s \n\
            Author:%s \n\
            Genre:%s \n\
            Pages:%d \n\
            Publisher: %s \n",B[j].Num,B[j].Name,B[j].author,\
            B[j].genre,B[j].pages,B[j].publisher);
            }
        }
        else if (op==3){
            char auth[40];int a=0;
            printf("\nEnter the name of the author:");
            gets(auth);
            gets(auth);
            printf("\nThe Books by %s are:-\n",auth);
            for (j=0;j<i;j++){
                if (strcmp(B[j].author,auth)==0){
                    printf("\n\
        %s",B[j].Name);
                    a=1;
                }
            }
            if (a==0){
                printf("No Books by %s available",auth);
            }
        }
        else if (op==4){
            printf("\nTotal Number of Books available in Library are %d",i);
        }
        else{
            printf("\nInvalid Option.Try Again.");
        }
    }
}