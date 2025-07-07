#include "solve.h"

double *example1(double **matrix, int n)
{
    // matrix daten
    // erst Zeile, dann Spalte
    matrix[0][0] = 1;
    matrix[1][0] = 1;
    matrix[2][0] = 3;

    matrix[0][1] = 2;
    matrix[1][1] = 1;
    matrix[2][1] = 3;

    matrix[0][2] = 3;
    matrix[1][2] = 1;
    matrix[2][2] = 1;

    matrix[0][3] = 2;
    matrix[1][3] = 2;
    matrix[2][3] = 0;

    return solve(matrix, n);
}

double *example2(double **matrix, int n)
{
    // matrix daten
    // erst Zeile, dann Spalte
    matrix[0][0] = 2;
    matrix[1][0] = 1;
    matrix[2][0] = -1;

    matrix[0][1] = 3;
    matrix[1][1] = -2;
    matrix[2][1] = 1;

    matrix[0][2] = -1;
    matrix[1][2] = 1;
    matrix[2][2] = 2;

    matrix[0][3] = -9;
    matrix[1][3] = 9;
    matrix[2][3] = 0;

    return solve(matrix, n);
}

double *example3(double **matrix_, int n)
{
    double **matrix = (double **)malloc(2 * sizeof(double *));
    for (int i = 0; i < 2; i++)
    {
        matrix[i] = (double *)malloc((2 + 1) * sizeof(double));
    }

    // matrix daten
    // erst Zeile, dann Spalte
    matrix[0][0] = 2;
    matrix[1][0] = 3;

    matrix[0][1] = 1;
    matrix[1][1] = -2;

    matrix[0][2] = -3;
    matrix[1][2] = 1;

    return solve(matrix, 2);
}
