#include<stdio.h>
#include<conio.h>
int main()
{
    int b,a,rem,result=0;
    printf("Enter a three digit number:");
    scanf("%d",&b);
    a=b;
    while(a!=0){
        rem=a%10; //new line added
        result+=rem*rem*rem;
        a/=10;
    }
    if(result==b)
    printf("%d is an armstrong number",b);
    else
    printf("%d is not an armstrong number",b);
    getch();

}