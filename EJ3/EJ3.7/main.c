/*!
 * @file    main.c
 * @brief   Implementar una función que convierta un valor en grados Fahrenheit a grados Celsius y otra que efectúe el cálculo inverso.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    25/05/2022
 * @details Instrucciones para compilar y linkear la aplicación: 1er comando: gcc -c main.c -o main.o -Wall
 *                                                               2do comando: gcc main.o -o EJ3.7
 *                                                               3er comando: ./EJ3.7
 */
#include <stdio.h>

float a_fahrenheit(float);
float a_celsius(float);

int main(void)
{
    float num;
    num=a_fahrenheit(25);//ejemplo con 25°c
    printf("%.3f °F\n",num);
    num=a_celsius(86);//ejemplo con 86°f
    printf("%.3f °C\n",num);
    return 0;
}

float a_fahrenheit(float grados_celsius)
{   
    float grados_fahrenheit;
    grados_fahrenheit=(grados_celsius * 9/5) + 32;
    return grados_fahrenheit;
}
float a_celsius(float grados_fahrenheit)
{   
    float grados_celsius;
    grados_celsius=(grados_fahrenheit - 32) * 5/9;
    return grados_celsius;
}