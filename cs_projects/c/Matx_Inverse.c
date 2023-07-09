#include <stdio.h>

double determinant(double matrix[3][3]) 
{
    return matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
           matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
           matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
}

void cofactor(double matrix[3][3], double cofactorMatrix[3][3]) {
    cofactorMatrix[0][0] = matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1];
    cofactorMatrix[0][1] = -(matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]);
    cofactorMatrix[0][2] = matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0];
    cofactorMatrix[1][0] = -(matrix[0][1] * matrix[2][2] - matrix[0][2] * matrix[2][1]);
    cofactorMatrix[1][1] = matrix[0][0] * matrix[2][2] - matrix[0][2] * matrix[2][0];
    cofactorMatrix[1][2] = -(matrix[0][0] * matrix[2][1] - matrix[0][1] * matrix[2][0]);
    cofactorMatrix[2][0] = matrix[0][1] * matrix[1][2] - matrix[0][2] * matrix[1][1];
    cofactorMatrix[2][1] = -(matrix[0][0] * matrix[1][2] - matrix[0][2] * matrix[1][0]);
    cofactorMatrix[2][2] = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
}

void transpose(double matrix[3][3], double transposeMatrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transposeMatrix[i][j] = matrix[j][i];
        }
    }
}

void multiplyScalar(double matrix[3][3], double scalar) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] *= scalar;
        }
    }
}

void inverse(double matrix[3][3], double inverseMatx[3][3]) {
    double det = determinant(matrix);
    if (det == 0) {
        printf("Inverse Matrix does not exist. \n");
        return;
    }
    
    double cofactorMatrix[3][3];
    cofactor(matrix, cofactorMatrix);
    double adjointMatrix[3][3];
    transpose(cofactorMatrix, adjointMatrix);
    multiplyScalar(adjointMatrix, 1 / det);
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) {
            inverseMatx[i][j] = adjointMatrix[i][j];
        }
    }
}

void printMatrix(double matrix[3][3]) 
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    double matrix[3][3];
    double inverseMatx[3][3];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    printf("Original Matrix:\n");
    printMatrix(matrix);

    inverse(matrix, inverseMatx);

    printf("Inverse Matrix:\n");
    printMatrix(inverseMatx);

    return 0;
}

