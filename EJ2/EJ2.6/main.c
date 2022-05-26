/*!
 * @file    main.c
 * @brief   Programa que imprima los números enteros del 1 al 100 por pantalla. Pero para los números múltiplos de 3, debe imprimir la
            palabra fizz en vez del número, para los números múltiplos de 5, debe imprimir la palabra buzz en vez del número, y para aquellos
            números que son múltiplos tanto de 3 como de 5, debe imprimir la palabra fizzbuzz en vez del número.
 * @author  Enzo Belmonte ebelmonte@frba.utn.edu.ar
 * @date    19/05/2022
 * @details Instrucciones para compilar y linkear la aplicación: 1er comando: gcc -c main.c -o main.o -Wall
 *                                                               2do comando: gcc main.o -o EJ2.6
 *                                                               3er comando: ./EJ2.6
 */
#include <stdio.h>

int main(void)
{
    int i;
    
    for(i=1;i<=100;i++){
        if(i%5==0 && i%3==0)
        {
            printf("fizz buzz\n");
        }
        else if(i%5==0)
        {
            printf("buzz\n");
        }
        else if(i%3==0)
        {
            printf("fizz\n");
        }
        else
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
