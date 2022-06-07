/*!
 * @file    funciones.c
 * @brief   Implementar una función que reciba un número entero pasado por referencia y muestre cómo se almacena en memoria.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    06/06/2022
 */
#include "funciones.h"
#include <stdio.h>

void mostrar_entero_en_memoria(int* numero)
{
    if (numero != NULL)
    {
        printf("Direccion de memoria: %p    Valor decimal: %d  Valor hexadecimal: %x\n",numero, *numero, *numero);
        for (int i = 0; i < 4; i++)
        {
            numero=numero+1;
            printf("Direccion de memoria: %p  Valor hexadecimal: %x\n",numero, *numero);
        }
        
    }
    else
    {
        printf("Error no se reciben punteros NULL.");
    }
}
