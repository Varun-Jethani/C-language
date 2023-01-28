#include<stdio.h>
#include<conio.h>
void main(){
    int n,m,i,j;
    printf("Enter the n and m size of matrix :");
    scanf("%d",&n);
    scanf("%d",&m);
    int mat[n][m];
    int mat2[n][m];
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("Enter for Matrix 1 The Value of position %d,%d:",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("Enter for Matrix 2 The Value of position %d,%d:",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
    int mat3[n][m];
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            mat3[i][j]=mat[i][j]+mat2[i][j];
        }
    }
    printf("Matrix 1 is;\n");
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("%d \t",mat[i][j]); 
        }
        printf("\n");
    }
    printf("Matrix 2 is;\n");
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("%d \t",mat2[i][j]);  
        }
        printf("\n");
    }
    printf("The output matrix is ;\n");
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("%d \t",mat3[i][j]);  
        }
        printf("\n");
    }
    getch();
}