/*!
 * @file    main.c
 * @brief   Implementar una función que eleve un determinado número al cuadrado.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    08/06/2022
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"

int main(void)
{
    float numero=0;
    numero=4;
    elevar_al_cuadrado(&numero);
    printf("%f\n",numero);
    return 0;
}
