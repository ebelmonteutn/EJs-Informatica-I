/*!
 * @file    main.c
 * @brief   Implementar una función que convierta un número que representa una cantidad total de segundos, a su equivalente en horas, minutos y
 *          segundos.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    08/06/2022
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"

int main(void)
{
    int horas=0, minutos=0, segundos=0;

    a_sexagesimal(8000, &horas, &minutos, &segundos);// ejemplo con 2460s
    printf("%d:%d:%d\n",horas, minutos, segundos);


    return 0;
}
