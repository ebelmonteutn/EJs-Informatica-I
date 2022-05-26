/*!
 * @file    main.c
 * @brief   Programa que dadas las coordenadas de un vector en R2 (x,y), compute la norma del mismo.
 * @author  Enzo Belmonte ebelmonte@frba.utn.edu.ar
 * @date    18/05/2022
 * @details Instrucciones para compilar y linkear la aplicación: 1er comando: gcc -c main.c -o main.o -Wall
 *                                                               2do comando: gcc main.o -o EJ1.4
 *                                                               3er comando: ./EJ1.4
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
    float x,y,norma;

    printf("Ingrese la cordenada X del vector en R2\n");
    scanf("%f",&x);
    printf("Ingrese la cordenada Y del vector en R2\n");
    scanf("%f",&y);
    norma=sqrt((x*x)+(y*y));
    printf("La norma del vector (%.3f,%.3f)=%.3f \n",x,y,norma);
    return 0;
}
