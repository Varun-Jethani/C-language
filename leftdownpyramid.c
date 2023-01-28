#include<stdio.h>
#include<conio.h>
void main(){
    int n,i,j;
    printf("Enter The Number of rows for the pyramid:");
    scanf("%d",&n);
    for (i=n;i>0;i--){
        for (j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    getch();
}
