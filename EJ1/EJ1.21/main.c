/*!
 * @file    main.c
 * @brief   Programa que dadas dos rectas definidas por su pendiente y su ordenada al origen devuelva el punto de intersección.
 * @author  Enzo Belmonte ebelmonte@frba.utn.edu.ar
 * @date    19/05/2022
 * @details Instrucciones para compilar y linkear la aplicación: 1er comando: gcc -c main.c -o main.o -Wall
 *                                                               2do comando: gcc main.o -o EJ1.21 -lm
 *                                                               3er comando: ./EJ1.21
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
    float m1,m2,b1,b2,x,y;

    printf("Ingrese la pendiente de la recta 1\n");
    scanf("%f",&m1);
    printf("Ingrese la ordenada al origen de la recta 1\n");
    scanf("%f",&b1);
    printf("Ingrese la pendiente de la recta 2\n");
    scanf("%f",&m2);
    printf("Ingrese la ordenada al origen de la recta 2\n");
    scanf("%f",&b2);

    if(m1==m2)
    {
        printf("Las rectas son paralelas\n");
    }
    else
    {
        x=(b2-b1)/(m1-m2);
        y=m1*x+b1;
        printf("El punto de interseccion es x=%.2f y=%.2f\n",x,y);
    }
    
    return 0;
}
