/*!
 * @file    main.c
 * @brief   Implementar una función que reciba un número entero pasado por referencia y muestre cómo se almacena en memoria.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    06/06/2022
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"

int main(void)
{
    int num=78456;
    mostrar_entero_en_memoria(&num);
    return 0;
}
