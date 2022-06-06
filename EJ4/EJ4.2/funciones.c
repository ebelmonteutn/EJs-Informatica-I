/*!
 * @file    funciones.c
 * @brief   Implementar una función llamada swap que reciba dos datos llamados a y b por referencia e intercambie su contenido, de forma tal que
 *          b pase a tener el contenido que originalmente tenía a y viceversa.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    03/06/2022
 */
#include <stdio.h>
#include "funciones.h"

void swap(int* a, int* b)
{
    if (a != NULL && b != NULL)
    {
    int aux=0;
    aux=*b;
    *b=*a;
    *a=aux;
    }   
    
}
