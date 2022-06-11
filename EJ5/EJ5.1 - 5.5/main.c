/*!
 * @file    main.c
 * @brief   Desarrolle un programa que solicite el ingreso de las calificaciones (como número enteros) del primer parcial de los estudiantes de
 *          Informática 1. El ingreso de calificaciones finalizará cuando se ingrese un once (11). Tener en cuenta que las calificaciones deberán ser
 *          números comprendidos entre 0 y 10 (0 significa ausente), por lo que se debe validar la carga de datos. Se podrán ingresar como máximo
 *          25 calificaciones.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    10/06/2022
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"
#define MAX 25

int main(void)
{
    int calificaciones[MAX];
    int cantidad=0, aprobados=0, desaprobados=0, ausentes=0, maximo=0, ubicacionmax=0, minimo=0, ubicacionmin=0;
    float promedioaus=0, promedio=0;
    
    while (i<MAX && calificaciones[i]!=11)
    {
        do
        {
            printf("Ingrese una nota (para finalizar ingrese <11>):");
            scanf("%d",&calificaciones[i]);
        } while(calificaciones[i]<0 || calificaciones[i]>11);
        if(calificaciones[i]!=11)
        {
            cantidad++;
        }
    }

    clasificar_calificaciones(calificaciones, i, &aprobados, &desaprobados, &ausentes);
    printf("La cantidad de aprobados    es: %d\n", aprobados);
    printf("La cantidad de desaprobados es: %d\n", desaprobados);
    printf("La cantidad de ausentes     es: %d\n", ausentes);

    promedioaus=promedio_con_ausentes(calificaciones, cantidad);
    printf("El promedio con ausentes    es:%.2f\n", promedioaus);
    promedio=promedio_sin_ausentes(calificaciones, cantidad);
    printf("El promedio sin ausentes    es:%.2f\n", promedio);

    ubicacionmax=calificacion_maxima(calificaciones, cantidad, &maximo);
    printf("La nota maxima es: %d y esta ubicada en: %d\n", maximo, ubicacionmax);

    ubicacionmin=calificacion_minima(calificaciones, cantidad, &minimo);
    printf("La nota minima es: %d y esta ubicada en: %d\n", minimo, ubicacionmin);
    return 0;
}
