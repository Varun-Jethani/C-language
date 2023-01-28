#include<stdio.h>
#include<conio.h>
#include<string.h>
/*return type defines type of value we can return using the funtion 
for returning blank statement/not returning any value, we can use void
for returning string or character we can use double
for returning number we can use int
basically we have to use a higher precednece of data type we want to return  */
char a[30];
const char* cat(char a[30]){
    char b[30]="cat";
    strcat(a,b);
    return a;
}
void main(){
    char c[30];
    printf("Enter a String :");
    gets(c);
    printf("New String is %s",cat(c));
    getch();
}
