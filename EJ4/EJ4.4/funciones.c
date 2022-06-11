/*!
 * @file    funciones.c
 * @brief   Implementar una función que reciba dos números enteros y una operación a realizar entre ellos.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    07/06/2022
 */
#include "funciones.h"
#include <stdio.h>

int calculadora(int x, int y, char operacion, float* resultado)
{
    if (resultado != NULL)
    {
        switch (operacion)
        {
            case '+':
                *resultado=x+y;
                return 0;
                break;
            case '-':
                *resultado=x-y;
                return 0;
                break;
            case '*':
                *resultado=x*y;
                return 0;
                break;
            case '/':
                if(y==0)
                {
                    return 2;
                }
                else
                {
                    *resultado=x/y;
                    return 0;
                }
                break;
            case '%':
                if(y==0)
                {
                    return 2;
                }
                else
                {
                    *resultado=x%y;
                    return 0;
                }
                break;
            default:
                return 1;
                break;
        }
    }
    else
    {
        return -1;
    }
}
