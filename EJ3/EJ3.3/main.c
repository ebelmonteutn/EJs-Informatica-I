/*!
 * @file    main.c
 * @brief   Implementar una función que reciba como argumento un número entero y determine si el mismo es primo.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    24/05/2022
 * @details Instrucciones para compilar y linkear la aplicación: 1er comando: gcc -c main.c -o main.o -Wall
 *                                                               2do comando: gcc main.o -o EJ3.3
 *                                                               3er comando: ./EJ3.3
 */
#include <stdio.h>

int es_primo(int);

int main(void)
{
    int num;
    num=es_primo(719);//ejemplo con el 719
    printf("%d\n",num);
    return 0;
}

int es_primo(int numero)
{   
    for(int i=2; i<numero; i++){
        if(numero%i==0 || numero == 1)
        {
             return 0;
        }
    }  
    if(!(numero%1) && !(numero%numero))
    {
        return 1;
    }
    else
    {
        return -1;
    }
}