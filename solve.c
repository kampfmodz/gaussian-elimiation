#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double *solve(double **matrix, int n)
{
    double *result_X = (double *)malloc(n * sizeof(double));
    for (int i = 0; i < n; ++i)
    {
        int max_row = i;
        // Suche nach groesten positiven Koeffizienten
        for (int row = i + 1; row < n; ++row)
        {
            if (fabs(matrix[row][i]) > fabs(matrix[max_row][i]))
                max_row = row;
        }

        // Koeffizient = 0 -> n.L.
        if (fabs(matrix[max_row][i]) == 0)
            return NULL;

        // Zeile mit naechster vertauschen
        double *tempRow = matrix[i];
        matrix[i] = matrix[max_row];
        matrix[max_row] = tempRow;

        // Elimienieren
        for (int row = i + 1; row < n; ++row)
        {
            double eliminationFactor = matrix[row][i] / matrix[i][i];
            for (int coefficient = i; coefficient <= n; ++coefficient)
            {
                matrix[row][coefficient] -= matrix[i][coefficient] * eliminationFactor;
            }
        }
    }

    // Rueckwaertseinsetzten von unten nach oben
    for (int row = n - 1; row >= 0; --row)
    {
        result_X[row] = matrix[row][n] / matrix[row][row];

        // "Variablen" Einsetzen
        for (int col = row - 1; col >= 0; --col)
            matrix[col][n] -= matrix[col][row] * result_X[row];
    }

    return result_X;
}