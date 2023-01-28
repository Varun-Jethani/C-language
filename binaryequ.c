#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int n,bin=0,a,i=0,nog;
    printf("Enter The Number:");
    scanf("%d",&n);
    nog=n;
    while(n>0){
        a=n%2;
        bin+=a*pow(10,i);
        i+=1;
        n=n/2;
    }
    printf("The Binary equvalent of %d is %d",nog,bin);
    getch();
}