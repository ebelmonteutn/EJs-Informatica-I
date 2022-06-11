/*!
 * @file    funciones.c
 * @brief   Implementar una función que convierta un número que representa una cantidad total de segundos, a su equivalente en horas, minutos y
 *          segundos.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    08/06/2022
 */
#include "funciones.h"
#include <stdio.h>

void a_sexagesimal(int total_segundos, int* horas, int* minutos, int* segundos)
{
    if ((horas != NULL) && (minutos != NULL) && (segundos != NULL))
    {
        *horas=total_segundos/3600;
        *minutos=(((float)total_segundos/3600)-(*horas))*60;
        *segundos=total_segundos-(*minutos)*60-(*horas)*3600;
    }
    else
    {
        printf("Error no se reciben punteros NULL.");
    }
}
