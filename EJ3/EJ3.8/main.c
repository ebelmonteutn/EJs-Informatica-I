/*!
 * @file    main.c
 * @brief   Implementar una función que convierta un valor en radianes a grados y otra que efectúe el cálculo inverso.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    25/05/2022
 * @details Instrucciones para compilar y linkear la aplicación: 1er comando: gcc -c main.c -o main.o -Wall
 *                                                               2do comando: gcc main.o -o EJ3.8
 *                                                               3er comando: ./EJ3.8
 */
#include <stdio.h>

#define PI 3.141592654

float a_radianes(float);
float a_grados(float);

int main(void)
{
    float num;
    num=a_radianes(180);//ejemplo con 180°
    printf("%.3f radianes\n",num);
    num=a_grados(3.141592/2);//ejemplo con pi/2
    printf("%.3f°\n",num);
    return 0;
}

float a_radianes(float grados)
{   
    float radianes;
    radianes = (PI / 180)*grados;
    return radianes;
}
float a_grados(float radianes)
{   
    float grados;
    grados = (1/(PI / 180))*radianes;
    return grados;
}