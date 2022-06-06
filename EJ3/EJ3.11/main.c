/*!
 * @file    main.c
 * @brief   Implementar una función que calcule el valor aproximado de e.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    02/06/2022
 * @details Instrucciones para compilar y linkear la aplicación: 1er comando: gcc -c main.c -o main.o -Wall
 *                                                               2do comando: gcc main.o -o EJ3.11
 *                                                               3er comando: ./EJ3.11
 */
#include <stdio.h>

unsigned long factorial(int);
double aproximar_e();

int main(void)
{
    double e=0;
    e=aproximar_e();
    printf("%lf\n",e);
    return 0;
}

double aproximar_e()
{
    double e=1,eant=0;
    for(int i=1; e-eant>0.000000001;i++){
        eant=e;
        e=e+1/(float)factorial(i);
    }
    return e;
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