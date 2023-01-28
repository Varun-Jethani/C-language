#include<stdio.h>
#include<conio.h>

void main(){
    int sum=0,n,i;
    printf("Enter the number of subjects:");
    scanf("%d",&n);
    int array[n];
    printf("Enter the marks:");
    for (i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for (i=0;i<n;i++){
        sum+=array[i];
    }
    printf("Sum is %d",sum);
    getch();
}