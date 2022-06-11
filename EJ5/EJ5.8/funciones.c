/*!
 * @file    funciones.c
 * @brief   Implementar una función que reciba un arreglo y su longitud y retorne 1 si el mismo se encuentra ordenado (de menor a mayor) y 0 en
 *          caso contrario
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    10/06/2022
 */
#include "funciones.h"
#include <stdio.h>

int esta_ordenado(const int* arreglo, int largo)
{
    int i=1, orden=1;
    while((i<largo) && (orden!=0))
    {
        if ( *(arreglo+i-1) < *(arreglo+i) )
        {
            orden=VERDADERO;
        }
        else
        {
            orden=FALSO;
        }
        i++;
    }
    return orden;
}
