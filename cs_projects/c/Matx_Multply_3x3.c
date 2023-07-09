#include <stdio.h>
/*author: or2xe2tp */
void mulMatx(int mat1[][3], int mat2[][3], int resultMatx[][3]) 
{
    int i, j, k;
    
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            resultMatx[i][j] = 0;
            
            for (k = 0; k < 3; k++) 
            {
                resultMatx[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[3][3];
    int mat2[3][3];
    int resultMatx[3][3];
    
    printf("Enter the elements of the first matrix:\n");
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Enter the elements of the second matrix:\n");
    
    for (int i = 0; i < 3; i++) //changes row 
    {
        for (int j = 0; j < 3; j++) 
        { 
            scanf("%d", &mat2[i][j]); //changes col 
        }
    }
    
    mulMatx(mat1, mat2, resultMatx);
    
    printf("Resultant matrix:\n");
    
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d\t", resultMatx[i][j]);
        }
        
        printf("\n");
    }
    return 0;
}
