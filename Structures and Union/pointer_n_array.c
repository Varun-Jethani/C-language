#include<stdio.h>
#include<conio.h>

void main(){
    int i,n,a[10]; int *ptr;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    ptr=a;
    printf("Array is ");
    for(i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    getch();
}