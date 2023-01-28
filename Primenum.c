#include<stdio.h>
#include<conio.h>

void main(){
    int num,count,i;
    printf("Enter a Positive Integer:");
    scanf("%d",&num);
    count=3;
    if (num>2){
        printf("2");
        while (num>=count){
            for (i=2;i<=count/2;i++){
                if(count%i==0){
                    break;
                }
            }
            if (i>=count/2){
                printf(", %d",count);                
            }
            count+=1;
        }
        printf(" are the Prime Numbers till %d.",num);
    }
    else if(num=2){printf("2 is the only prime number till 2");}
    else{printf("There are no Prime numbers smaller than 2");}
    getch();
}