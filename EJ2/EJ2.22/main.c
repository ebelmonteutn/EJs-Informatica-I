/*!
 * @file    main.c
 * @brief   Programa que permita determinar el máximo y el mínimo de un conjunto de valores numéricos reales ingresados por stdin
 * @author  Enzo Belmonte ebelmonte@frba.utn.edu.ar
 * @date    16/05/2022
 * @details Instrucciones para compilar y linkear la aplicación: 1er comando: gcc -c main.c -o main.o -Wall
 *                                                               2do comando: gcc main.o -o EJ2.22
 *                                                               3er comando: ./EJ2.22
 */
#include <stdio.h>

int main(void)
{
    int cant=0, i;
    float max=0, min=0, num=0;

    printf("Ingrese la cantidad de numeros a procesar\n");
    scanf("%d",&cant);
    for(i=0;i<cant;i++){
        printf("Ingrese un numero\n");
        scanf("%f",&num);
        if(num>max){
            max=num;
        }
        if(i==0){
            min=num;
        }
        if(num<min){
            min=num;
        }
    }
    printf("El maximo es: %.2f\n",max);
    printf("El minimo es: %.2f\n",min);
    return 0;
}
