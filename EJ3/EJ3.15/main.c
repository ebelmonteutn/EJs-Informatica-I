/*!
 * @file    main.c
 * @brief   Implementar una función que calcule (y retorne) el n-ésimo número de la sucesión de Fibonacci e imprima la serie hasta dicho número.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    02/06/2022
 * @details Instrucciones para compilar y linkear la aplicación: 1er comando: gcc -c main.c -o main.o -Wall
 *                                                               2do comando: gcc main.o -o EJ3.15
 *                                                               3er comando: ./EJ3.15
 */
#include <stdio.h>

int fibonacci(int);

int main(void)
{
    int num=0;
    num=fibonacci(7);
    printf("%d\n",num);
    return 0;
}

int fibonacci(int n)
{
    if(n==0)
    {
        return n;
    }
    else if(n==1)
    {
        return n;
    }
    else
    {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}