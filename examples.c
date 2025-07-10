#include "solve.h"

double *example1(double **matrix, int *n)
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

    return solve(matrix, *n);
}

double *example2(double **matrix, int *n)
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

    return solve(matrix, *n);
}

double *example3(double **matrix, int *n)
{
    *n = 2;
    matrix = (double **)malloc(*n * sizeof(double *));
    for (int i = 0; i < *n; i++)
    {
        matrix[i] = (double *)malloc((*n + 1) * sizeof(double));
    }

    // matrix daten
    // erst Zeile, dann Spalte
    matrix[0][0] = 2;
    matrix[1][0] = 3;

    matrix[0][1] = 1;
    matrix[1][1] = -2;

    matrix[0][2] = -3;
    matrix[1][2] = 1;

    return solve(matrix, *n);
}

double *example4(double **matrix, int *n)
{
    // matrix daten
    // erst Zeile, dann Spalte
    matrix[0][0] = -1;
    matrix[1][0] = 1;
    matrix[2][0] = 5;

    matrix[0][1] = 1;
    matrix[1][1] = -3;
    matrix[2][1] = 1;

    matrix[0][2] = 1;
    matrix[1][2] = -2;
    matrix[2][2] = 4;

    matrix[0][3] = 0;
    matrix[1][3] = 5;
    matrix[2][3] = 3;

    return solve(matrix, *n);
}
