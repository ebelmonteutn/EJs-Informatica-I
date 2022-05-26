/*!
 * @file    main.c
 * @brief   Implementar una función que calcule el factorial de un número entero pasado como argumento.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    24/05/2022
 * @details Instrucciones para compilar y linkear la aplicación: 1er comando: gcc -c main.c -o main.o -Wall
 *                                                               2do comando: gcc main.o -o EJ3.5
 *                                                               3er comando: ./EJ3.5
 */
#include <stdio.h>

unsigned long factorial(int);

int main(void)
{
    unsigned long num;
    num=factorial(4);//ejemplo con el 4
    printf("%ld\n",num);
    return 0;
}

unsigned long factorial(int numero)
{   
    unsigned long num=numero;
    for(unsigned long i=1; i<numero; i++)
    {
        num=num*i;
    }
    return num;
}