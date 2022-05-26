/*!
 * @file    main.c
 * @brief   Implementar una función que reciba un número entero que represente un año y determine si dicho año resulta ser bisiesto o no.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    24/05/2022
 * @details Instrucciones para compilar y linkear la aplicación: 1er comando: gcc -c main.c -o main.o -Wall
 *                                                               2do comando: gcc main.o -o EJ3.4
 *                                                               3er comando: ./EJ3.4
 */
#include <stdio.h>

int es_bisiesto(int);

int main(void)
{
    int anio;
    anio=es_bisiesto(2003);//ejemplo con el 2003
    printf("%d\n",anio);
    return 0;
}

int es_bisiesto(int anio)
{   
    if((anio%4==0 && anio%100) || anio%400==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}