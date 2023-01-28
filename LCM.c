#include<stdio.h>
#include<conio.h>
int isprime(int a){
    int mid,i;
    mid=a/2;
    for (i=2;i<=mid;i++){
        if (a%i==0){
            return -1;
        }
    }
    return 0;
}

void main(){
    int a,b,og_a,og_b,i,j,hcf=1,pro,lcm;
    printf("Enter 2 numbers:");
    scanf("%d %d",&a,&b);
    pro=a*b; og_a=a; og_b=b;
    for (i=2;i<=a;i++){
        if(isprime(i)==0){
            for(j=0;j<=a;j++){
                if ((a%i==0)&&(b%i==0)){
                    a/=i;b/=i;
                    hcf*=i;
                }
                else{break;}
            }
        }
    }
    lcm=pro/hcf;
    printf("\nLCM of %d and %d is %d\n",og_a,og_b,lcm);
    getch();
}