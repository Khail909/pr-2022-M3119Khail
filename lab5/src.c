#include <stdio.h>

typedef struct Matrix{
    int a11, a12, a21, a22;
} Matrix;

Matrix matrix_multi(Matrix, Matrix);

int main(){
    int arr[6] = {34, 45, 56, 67, 78, 89};

    printf("\n%d %d %d\n%d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);

    Matrix matrix1, matrix2, matrix3;

    matrix1.a11 = 1;
    matrix1.a12 = 1;
    matrix1.a21 = 0;
    matrix1.a22 = 1;

    matrix2.a11 = 2;
    matrix2.a12 = 0;
    matrix2.a21 = 3;
    matrix2.a22 = 0;

    matrix3 = matrix_multi(matrix1, matrix2);
    printf("\n%d %d\n%d %d\n", matrix3.a11, matrix3.a12, matrix3.a21, matrix3.a22);

    return 0;
}

Matrix matrix_multi(Matrix m1, Matrix m2){
    Matrix matrixRes;
    matrixRes.a11 = m1.a11 * m2.a11 + m1.a12*m2.a21;
    matrixRes.a12 = m1.a11 * m2.a12 + m1.a12*m2.a22;
    matrixRes.a21 = m1.a21 * m2.a11 + m1.a22*m2.a21;
    matrixRes.a22 = m1.a21 * m2.a12 + m1.a22*m2.a22;
    return matrixRes;
}