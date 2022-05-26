/*!
 * @file    main.c
 * @brief   Implementar una función que simule el tiro de un dado haciendo uso de la función estándar rand() para generar la secuencia
            pseudoaleatoria.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    24/05/2022
 * @details Instrucciones para compilar y linkear la aplicación: 1er comando: gcc -c main.c -o main.o -Wall
 *                                                               2do comando: gcc main.o -o EJ3.2
 *                                                               3er comando: ./EJ3.2
 */
#include <stdio.h>
#include <stdlib.h>

int tirar_dado();

int main(void)
{
    int num;
    num=tirar_dado();
    printf("%d\n",num);
    return 0;
}

int tirar_dado()
{
    int num;
    num=rand()%6;
    return num;
}