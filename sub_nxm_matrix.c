#include<stdio.h>
#include<conio.h>
int n,m;
void displaymat(int mat[n][m]){
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("%d \t",mat[i][j]);
        }
        printf("\n");
    }
}
void inputmat(int mat[n][m],char x[9]){
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("Enter value For %s at position %d,%d:",x,i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
}
void main(){
    int i,j;
    printf("Enter The Size of Matrix (row and columns):");
    scanf("%d %d",&n,&m);
    int mat1[n][m]; 
    inputmat(mat1,"Matrix A");
    int mat2[n][m]; 
    inputmat(mat2,"Matrix B");
    int mat3[n][m];
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            mat3[i][j]=mat1[i][j]-mat2[i][j];
        }
    }
    printf("\nMatrix A is \n");
    displaymat(mat1);
    printf("\nMatrix B is \n");
    displaymat(mat2);
    printf("\nMatrix C=A-B is\n");
    displaymat(mat3);
    getch();
}