/*!
 * @file    main.c
 * @brief   Implementar una función llamada swap que reciba dos datos llamados a y b por referencia e intercambie su contenido, de forma tal que
 *          b pase a tener el contenido que originalmente tenía a y viceversa.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    03/06/2022
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"

int main(void)
{
    int a=2, b=9;
    printf("Antes del swap variable a: %d variable b: %d\n",a,b);
    swap(&a,&b);
    printf("Despues del swap variable a: %d variable b: %d\n",a,b);

    a=54, b=3;
    printf("Antes del swap variable a: %d variable b: %d\n",a,b);
    swap(&a,&b);
    printf("Despues del swap variable a: %d variable b: %d\n",a,b);
    
    return 0;
}
