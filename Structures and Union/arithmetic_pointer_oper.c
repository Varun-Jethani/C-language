#include<stdio.h>
#include<conio.h>

void main(){
    int a=20,b=10;
    int sum,diff,pro,quo;
    int *ptr_a=&a;
    int *ptr_b=&b;
    sum = *ptr_a + *ptr_b;
    diff= *ptr_a - *ptr_b;
    pro = *ptr_a * *ptr_b;
    quo = *ptr_a / *ptr_b;
    printf("SUM: %d",sum);
    printf("\nDIFFERENCE: %p",diff);
    printf("\nPRODUCT: %d",pro);
    printf("\nQUOTIENT: %d",quo);
    getch();
}