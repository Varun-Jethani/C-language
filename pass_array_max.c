#include<stdio.h>
#include<conio.h>

int maxarr(int array[],int size);
void main(){
    int arr[99],size,i;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the %d elements of array:",size);
    for (i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    maxarr(arr,size);
    getch();
}
int maxarr(int array[],int size){
    int maxval=0,i;
    for (i=0;i<size;i++){
        if (array[i]>maxval){
            maxval=array[i];
        }
    }
    printf("Maximum Value in the Array is %d",maxval);
}