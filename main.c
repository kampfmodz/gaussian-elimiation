#include "solve.h"
#include "examples.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // matrix allokieren
    int size = 3;
    double **matrix = (double **)malloc(size * sizeof(double *));
    for (int i = 0; i < size; i++)
    {
        matrix[i] = (double *)malloc((size + 1) * sizeof(double));
    }

    double *result = example3(matrix, size);

    if (!result)
    {
        printf("keine eindeutige loesung\n");
        return 0;
    }

    printf("\n---- Ergebnisse ----\n");
    for (int i = 0; i < sizeof(result); i++)
    {
        printf("\nx%d - %f\n", i + 1, result[i]);
    }

    printf("\n---- ---------- ----\n");

    return 0;
}
