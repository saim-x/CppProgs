#include <stdio.h>
void main()
{
    int row_of_mat_1, col_of_mat_1, row_of_mat_2, col_of_mat_2;
    // Matric Order Determination
    printf("\nEnter the row of first matrix: ");
    scanf("%d", &row_of_mat_1);
    printf("\nEnter the column of first matrix: ");
    scanf("%d", &col_of_mat_1);
    printf("\nEnter the row of second matrix: ");
    scanf("%d", &row_of_mat_2);
    printf("\nEnter the column of second matrix: ");
    scanf("%d", &col_of_mat_2);
    // Matrix Initialization
    int mat1[row_of_mat_1][col_of_mat_1];
    int mat2[row_of_mat_2][col_of_mat_2];
    int matans[row_of_mat_1][col_of_mat_2];

    // Getting Matrix Values
    for (int i = 0; i < row_of_mat_1; i++)
    {
        for (int j = 0; j < col_of_mat_1; j++)
        {
            printf("\nEnter the value of %d row of %d column of matrix 1.", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }
    for (int i = 0; i < row_of_mat_2; i++)
    {
        for (int j = 0; j < col_of_mat_2; j++)
        {
            printf("\nEnter the value of %d row of %d column of matrix 2.", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }
    // TESTING: Displaying all the matrix values
    for (int i = 0; i < row_of_mat_1; i++)
    {
        for (int j = 0; j < col_of_mat_1; j++)
        {
            printf("\nThe value of %d row of %d column of matrix 1 is %d", i + 1, j + 1, mat1[i][j]);
        }
    }
    for (int i = 0; i < row_of_mat_2; i++)
    {
        for (int j = 0; j < col_of_mat_2; j++)
        {
            printf("\nThe value of %d row of %d column of matrix 2 is %d", i + 1, j + 1, mat2[i][j]);
        }
    }
    for(int i = 0; i < row_of_mat_1; i++) {
        for(int j = 0; j < col_of_mat_2; j++) {
            matans[i][j] = 0;
        }
    }
    // Multiplication of matrices
    if (col_of_mat_1 == row_of_mat_2)
    {
        // mat1[0][0] * mat2[0][0] + mat1[0][1] * mat2[1][0];
        // // first row of second coloumn of matans
        // mat1[0][0] * mat2[0][1] + mat1[0][1] * mat2[1][1];
        // // second row of first coloumn of matans
        // mat1[1][0] * mat2[0][0] + mat1[1][1] * mat2[1][0];
        // // second row of second coloumn of matans
        // mat1[1][0] * mat2[0][1] + mat1[1][1] * mat2[1][1];
        for (int i = 0; i < row_of_mat_1; i++)
        {
            for (int j = 0; j < col_of_mat_2; j++)
            {
                for (int k = 0; k < row_of_mat_2; k++)
                {
                    matans[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
    }
    else
    {
        printf("\nMultiplication is not possible because columns of matrix 1 are not equal to rows of matrix 2.");
    }
    printf("\nThe value of multiplied matrix is:\n");

    for (int i = 0; i < row_of_mat_1; i++)
    {
        for (int j = 0; j < col_of_mat_2; j++)
        {
            printf(" %d\t ", matans[i][j]);
        }
        printf("\n");
    }
}