#include<stdio.h>
#include<conio.h>

int max(int arr[],int size){
    int max=0,i;
    for (i=0;i<size;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

void main(){
    int n,i;
    printf("Enter Size of Array:");
    scanf("%d",&n);
    int array[n];
    printf("Enter Elements of Array:");
    for (i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Largest Element of Array is: %d",max(array,n));
    getch();
}