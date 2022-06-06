/*!
 * @file    main.c
 * @brief   Implementar una función que incremente en 1 el valor de una variable entera pasada por referencia.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    03/06/2022
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"

int main(void)
{
    int num=2;
    incrementar(&num);
    printf("Ejemplo de llamado a función implementada: %d\n",num);

    num=5;
    incrementar(&num);
    printf("Ejemplo de llamado a función implementada: %d\n",num);
    
    return 0;
}
