/*!
 * @file    main.c
 * @brief   Implementar una función que reciba un arreglo y su longitud y retorne 1 si el mismo se encuentra ordenado (de menor a mayor) y 0 en
 *          caso contrario
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    10/06/2022
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"
#define LARGO 5

int main(void)
{
    int ordenado=0;
    int arreglo[LARGO]={1,2,3,4,5};
    ordenado=esta_ordenado(&arreglo[0], LARGO);
    printf("El resultado de la funcion es %d\n" ,ordenado);// Ejemplo con {1,2,3,4,5}
    arreglo[0]=8;
    arreglo[1]=2;
    arreglo[2]=3;
    arreglo[3]=4;
    arreglo[4]=5;
    ordenado=esta_ordenado(&arreglo[0], LARGO);
    printf("El resultado de la funcion es %d\n" ,ordenado);// Ejemplo con {8,2,3,4,5}
    arreglo[0]=6;
    arreglo[1]=5;
    arreglo[2]=2;
    arreglo[3]=1;
    arreglo[4]=9;
    ordenado=esta_ordenado(&arreglo[0], LARGO);
    printf("El resultado de la funcion es %d\n" ,ordenado);// Ejemplo con {6,5,2,1,9}
    arreglo[0]=0;
    arreglo[1]=0;
    arreglo[2]=0;
    arreglo[3]=0;
    arreglo[4]=0;
    ordenado=esta_ordenado(&arreglo[0], LARGO);
    printf("El resultado de la funcion es %d\n" ,ordenado);// Ejemplo con {6,5,2,1,9}
    return 0;
}
