#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Pedir dimensiones
    int fil , col, i, j;
    printf("Ingrese el numero de filas de la matriz: ");
    scanf("%d", &fil);
    printf("Ingrese el numero de columnas de la matriz: ");
    scanf("%d", &col);


    //numeros aleatorios e impresion de la matriz original
    int matrixA[fil][col];
    int matrixB[fil][col];

    srand(time(0));

    //Impresion Matriz 1
    printf("\nMatriz original:\n");
    for (i = 0; i < fil; i++)
    {
        for (j = 0; j < col; j++)
        {
            matrixA[i][j] = rand() % 101;
            printf("%d \t ", matrixA[i][j]);
        }
        printf("\n");
    }

    printf ("\n");

    //Impresion Matriz 2
    for (i = 0; i < fil; i++)
    {
        for (j = 0; j < col; j++)
        {
            matrixB[i][j] = rand() % 101;
            printf("%d \t ", matrixB[i][j]);
        }
        printf("\n");
    }


    printf("\n");

    
    for (i = 0; i < fil; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d \t ", matrixB[i][j]+matrixA[i][j]);
        }
        printf("\n");
    }
    


    return 0;   
}
