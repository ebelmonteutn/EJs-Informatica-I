/*!
 * @file    main.c
 * @brief   Implementar una función que calcule x elevado a la y sin utilizar la función estándar pow(). La función debe admitir exponentes
            enteros positivos, negativos, o de valor 0.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    24/05/2022
 * @details Instrucciones para compilar y linkear la aplicación: 1er comando: gcc -c main.c -o main.o -Wall
 *                                                               2do comando: gcc main.o -o EJ3.1
 *                                                               3er comando: ./EJ3.1
 */
#include <stdio.h>

float mi_pow(float, int);

int main(void)
{
    float num;
    num=mi_pow(5,2);//ejemplo con 5 al cuadrado
    printf("%.2f\n",num);
    return 0;
}

float mi_pow(float x, int y)
{
    float num=x;
    for(int i=1;i<y;i++)
    {
        num=num*x;
    }
    return num;
}