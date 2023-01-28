#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){
    int n,sum=0,i;
    printf("Enter Number of Elements:");
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Memory can't be Allocated");
    }
    else{
        printf("Memory Allocated");
        printf("Enter Values of array:");
        for(i=0;i<n;i++){
            scanf("%d",ptr+i);
            sum=sum+(*ptr+i);
        }
        printf("Sum is %d",sum);

    }
    free(ptr);
}