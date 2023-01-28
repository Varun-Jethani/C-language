#include<stdio.h>
#include<conio.h>
void main(){
    int n,m,l,i,j,k,e;
    printf("This is the program to print the output of matrix multiplication: A(nm) >< B(ml)");
    printf("\nEnter the values n, m and l :");
    scanf("%d %d %d",&n,&m,&l);
    int mat[n][m];
    int mat2[m][l];
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("Enter for Matrix A The Value of position %d,%d:",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    for (i=0;i<m;i++){
        for (j=0;j<l;j++){
            printf("Enter for Matrix B The Value of position %d,%d:",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
    int mat3[n][l];
    for (i=0;i<n;i++){
        for (j=0;j<l;j++){
            e=0;
            for (k=0;k<m;k++){
                e=e+((mat[i][k])*(mat2[k][j]));
            }
            mat3[i][j]=e;
    
        }
    }
    printf("Matrix A is;\n");
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("%d \t",mat[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B is;\n");
    for (i=0;i<m;i++){
        for (j=0;j<l;j++){
            printf("%d \t",mat2[i][j]);
        }
        printf("\n");
    }
    printf("The output matrix A><B is ;\n");
    for (i=0;i<n;i++){
        for (j=0;j<l;j++){
            printf("%d \t",mat3[i][j]);
        }
        printf("\n");
    }
    getch();
}
