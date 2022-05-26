/*!
 * @file    main.c
 * @brief   Programa que dado un número entero imprima el primer número múltiplo de 10 inferior a él. Por ejemplo, para 153 debe
            imprimir 150. Si el número ingresado es múltiplo de 10, se debe imprimir el mismo número.
 * @author  Enzo Belmonte ebelmonte@frba.utn.edu.ar
 * @date    18/05/2022
 * @details Instrucciones para compilar y linkear la aplicación: 1er comando: gcc -c main.c -o main.o -Wall
 *                                                               2do comando: gcc main.o -o EJ1.12
 *                                                               3er comando: ./EJ1.12
 */
#include <stdio.h>

int main(void)
{
    int num=0;

    printf("Ingrese un numero\n");
    scanf("%d",&num);
    num=num-(num%10);
    printf("El primer número múltiplo de 10 inferior es: %d\n",num);
    return 0;
}
