/*!
 * @file    main.c
 * @brief   Implementar una función que convierta una letra minúscula a su equivalente mayúscula.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    07/06/2022
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"

int main(void)
{
    int retorno=0;
    char letra;
    
    letra='a';
    printf("Letra antes: %c\n",letra);
    retorno=a_mayuscula(&letra);
    printf("Letra despues: %c y %d\n",letra, retorno);
    letra='j';
    printf("Letra antes: %c\n",letra);
    retorno=a_mayuscula(&letra);
    printf("Letra despues: %c y %d\n",letra, retorno);
    return 0;
}
