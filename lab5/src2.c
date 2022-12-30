#include <stdio.h>
#define N 10

void matrix_inp(int, int [][N]);
void matrix_disp(int, int [][N]);
void matrix_multi(int, int [][N], int [][N]);


int main(){
    int n;
    scanf("\n%d", &n);

    int matrix1[n][n], matrix2[n][n];

    matrix_inp(n, matrix1);
    matrix_inp(n, matrix2);

    // matrix1[1][1] = 1;
    // matrix1[1][2] = 1;
    // matrix1[2][1] = 0;
    // matrix1[2][2] = 1;

    // matrix2[1][1] = 2;
    // matrix2[1][2] = 0;
    // matrix2[2][1] = 3;
    // matrix2[2][2] = 0;

    matrix_multi(n, matrix1, matrix2);


    return 0;
}


void matrix_inp(int n, int mat[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("\nEnter a%d%d ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
}


void matrix_disp(int n, int mat[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", mat[i][j]);
            if(j == n - 1){
                printf("\n");
            }
        }
    }
}


void matrix_multi(int n, int mat1[n][n], int mat2[n][n]){
    int matRes[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matRes[i][j] = 0;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                matRes[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    matrix_disp(n, matRes);
}


