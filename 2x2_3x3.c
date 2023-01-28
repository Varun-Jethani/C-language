#include<stdio.h>
#include<conio.h>
int mat[3][3],res[3][3],i,j;
void inmat(){
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            printf("Enter the postion %d %d of matrix:",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
}
int matri[3][3];
void displaymat(int matri[3][3],int x){
    //int a[3][3]=matri;
    for (i=0;i<x;i++){
        for (j=0;j<x;j++){
            printf("%d \t",matri[i][j]);
        }
        printf("\n");
    }
}

void main(){
    inmat();
    printf("\n2x2 Matrix is:\n");
    displaymat(mat,2);

    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            if ((i<2) && (j<2)){
                res[i][j]=mat[i][j];
            }
            else if ((i==2)&&(j!=2)){
                res[i][j]=mat[0][j]+mat[1][j];

            }
            else if ((j==2)&&(i!=2)){
                res[i][j]=mat[i][0]+mat[i][1];

            }
            else if ((i==2)&&(j==2)){
                res[i][j]=res[0][j]+res[1][j];
            }

        }
    }
    printf("\n3x3 Matrix Formed is:\n");
    displaymat(res,3);
    getch();

}
