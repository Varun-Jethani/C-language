#include<stdio.h>
#include<conio.h>

int is_perfect(int n){
    int i,psum=0;
    for (i=1;i<n;i++){
        if (n%i==0){
            psum+=i;
        }
    }
    if (psum==n){
        return 1;
    }
    return 0;
}

void main(){
    int n,i;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("Perfect numbers between 1 and %d are\n", n);
    for (i=1;i<=n;i++){
        if (is_perfect(i)==1){
            printf("%d \t",i);
        }
    }
    getch();
}

