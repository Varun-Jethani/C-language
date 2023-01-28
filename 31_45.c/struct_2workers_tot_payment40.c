#include<stdio.h>
#include<conio.h>

struct Workers{
    int Id;
    char name[20];
    int payment;
}W1,W2;

void main(){
    printf("Enter Id of worker1:");
    scanf("%d",&W1.Id);
    printf("Enter the Nmae of Worker1:");
    gets(W1.name);
    gets(W1.name);
    printf("Enter the Payment of Worker1: Rs.");
    scanf("%d",&W1.payment);
    printf("Enter Id of worker2:");
    scanf("%d",&W2.Id);
    printf("Enter the Nmae of Worker2:");
    gets(W2.name);
    gets(W2.name);
    printf("Enter the Payment of Worker2: Rs.");
    scanf("%d",&W2.payment);
    int tot=W1.payment + W2.payment;
    printf("The Total Payment of Both Workers is Rs.%d",tot);
    getch();
}