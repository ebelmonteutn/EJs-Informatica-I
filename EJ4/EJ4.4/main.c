/*!
 * @file    main.c
 * @brief   Implementar una función que reciba dos números enteros y una operación a realizar entre ellos.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    07/06/2022
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"

int main(void)
{
    int retorno=0;
    float resultado=0;

    retorno=calculadora(8, 0, '/', &resultado);
    printf("%d y es %f\n",retorno, resultado);
    retorno=calculadora(8, 4, 'j', &resultado);
    printf("%d y es %f\n",retorno, resultado);
    retorno=calculadora(4, 2, '+', &resultado);
    printf("%d y es %f\n",retorno, resultado);
    retorno=calculadora(10, 6, '-', &resultado);
    printf("%d y es %f\n",retorno, resultado);
    retorno=calculadora(5, 3, '*', &resultado);
    printf("%d y es %f\n",retorno, resultado);
    retorno=calculadora(8, 4, '/', &resultado);
    printf("%d y es %f\n",retorno, resultado);
    retorno=calculadora(4, 3, '%', &resultado);
    printf("%d y es %f\n",retorno, resultado);

    return 0;
}
