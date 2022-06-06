/*!
 * @file    funciones.c
 * @brief   Implementar una función que incremente en 1 el valor de una variable entera pasada por referencia.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    03/06/2022
 */
#include <stdio.h>
#include "funciones.h"

void incrementar(int* numero)
{
    if (numero != NULL)
    {
        *numero=*numero+1;
    }
}
