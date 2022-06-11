/*!
 * @file    funciones.c
 * @brief   Implementar una función que eleve un determinado número al cuadrado.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    08/06/2022
 */
#include "funciones.h"
#include <stdio.h>

void elevar_al_cuadrado(float* numero)
{
    if (numero != NULL)
    {
        *numero=(*numero)*(*numero);        
    }
}
