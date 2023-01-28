#include<stdio.h>
#include<conio.h>

void main(){
    int n,no,bin[16],i;
    printf("Enter Number:");
    scanf("%d",&n);
    no=n;
    for(i=0;no>0;i++){
        bin[i]=no%2;
        no/=2;
    }
    printf("Binary Equivalent of %d is: ",n);
    for (i=i-1;i>=0;i--){
        printf("%d",bin[i]);
    }
    getch();
}