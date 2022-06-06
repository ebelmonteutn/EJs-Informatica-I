/*!
 * @file    main.c
 * @brief   Implementar una función que dada una dimensión imprima la matriz identidad de esa dimensión.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    02/06/2022
 * @details Instrucciones para compilar y linkear la aplicación: 1er comando: gcc -c main.c -o main.o -Wall
 *                                                               2do comando: gcc main.o -o EJ3.20
 *                                                               3er comando: ./EJ3.20
 */
#include <stdio.h>

void matriz_identidad(int);

int main(void)
{
    matriz_identidad(8);

    return 0;
}

void matriz_identidad(int dimension)
{
   for(int i=1; i<=dimension; i++)
   {
       for(int j=1; j<=dimension; j++)
        {
            if(i==j)
            {
                printf(" 1 ");
            }
            else
            {
                printf(" 0 ");
            }
        }
        printf("\n");
   }
}