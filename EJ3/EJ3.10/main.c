/*!
 * @file    main.c
 * @brief   Implementar una función que calcule la raíz cuadrada de x según el algoritmo babilónico para calcular la raíz cuadrada de un número x.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    02/06/2022
 * @details Instrucciones para compilar y linkear la aplicación: 1er comando: gcc -c main.c -o main.o -Wall
 *                                                               2do comando: gcc main.o -o EJ3.10
 *                                                               3er comando: ./EJ3.10
 */
#include <stdio.h>

float raiz_cuadrada(float);

int main(void)
{
    float raiz=0;
    raiz=raiz_cuadrada(16);
    printf("%f",raiz);
    return 0;
}

float raiz_cuadrada(float x)
{
    
}