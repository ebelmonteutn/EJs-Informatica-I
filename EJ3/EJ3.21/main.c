/*!
 * @file    main.c
 * @brief   Implementar una función que dadas dos rectas definidas por su pendiente y su ordenada al origen devuelva la abscisa en la que se
 *          intersectan.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    02/06/2022
 * @details Instrucciones para compilar y linkear la aplicación: 1er comando: gcc -c main.c -o main.o -Wall
 *                                                               2do comando: gcc main.o -o EJ3.21
 *                                                               3er comando: ./EJ3.21
 */
#include <stdio.h>

float interseccion_rectas(float, float, float, float);

int main(void)
{
    float x=0;
    x=interseccion_rectas(1, 1, -1, -1);
    printf("%.3f es el punto de interseccion de las rectas\n",x);
    return 0;
}

float interseccion_rectas(float m1, float b1, float m2, float b2)
{
   float x=0;
   x=(b2-b1)/(m1-m2);
   return x;
}