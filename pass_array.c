#include<stdio.h>
#include<conio.h>

int minarray(int arr[],int size){
    int min=arr[0];
    int i;
    for (i=0;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}
void main(){
    int arr[99],size,i,min;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the elements of array");
    for (i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nMinimum number in array is %d",minarray(arr,size));
    getch();
}