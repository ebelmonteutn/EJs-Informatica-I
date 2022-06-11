/*!
 * @file    funciones.c
 * @brief   Implementar una función que convierta una letra minúscula a su equivalente mayúscula.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    07/06/2022
 */
#include "funciones.h"
#include <stdio.h>

int a_mayuscula(char* letra)
{
    if (letra != NULL)
    {
        if(*letra>=97 && *letra<= 122)
        {
            *letra=*letra-32;
            return 0;
        }
        else
        {
            return 1;
        }
        
    }
    else
    {
        return -1;
    }
}
