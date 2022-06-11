/*!
 * @file    funciones.c
 * @brief   Desarrolle un programa que solicite el ingreso de las calificaciones (como número enteros) del primer parcial de los estudiantes de
 *          Informática 1. El ingreso de calificaciones finalizará cuando se ingrese un once (11). Tener en cuenta que las calificaciones deberán ser
 *          números comprendidos entre 0 y 10 (0 significa ausente), por lo que se debe validar la carga de datos. Se podrán ingresar como máximo
 *          25 calificaciones.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    10/06/2022
 */
#include "funciones.h"

void clasificar_calificaciones(const int* calificaciones, int cantidad, int* aprobados, int*desaprobados, int* ausentes)
{
    int i;
    for(i=0; i<cantidad; i++)
    {
        if(*(calificaciones+i)>=6)
        {
            *aprobados=*aprobados+1;
        }
        else if(*(calificaciones+i)< 6 && *(calificaciones+i)!=0)
        {
            *desaprobados=*desaprobados+1;
        }
        else if(*(calificaciones+i)==0)
        {
            *ausentes=*ausentes+1;
        }
    }
}

float promedio_con_ausentes(const int* calificaciones, int cantidad)
{
    int i;
    int suma=0;
    float promedio;
    for(i=0; i<cantidad; i++)
    {
        suma=suma+*(calificaciones+i);
    }
    promedio=(float)suma/i;
    return promedio;
}

float promedio_sin_ausentes(const int* calificaciones, int cantidad){
    int i;
    int suma=0, j=0;
    float promedio;
    for(i=0; i<cantidad; i++)
    {
        if(*(calificaciones+i)!=0)
        {
            suma=suma+*(calificaciones+i);
            j++;
        }
    }
    promedio=(float)suma/j;
    return promedio;
}

int calificacion_maxima(const int* calificaciones, int cantidad, int* maximo)
{
    int i,ubicacion;
    *maximo=0;
    for(i=0; i<cantidad; i++)
    {
        if(*(calificaciones+i)>*maximo)
        {
            *maximo=*(calificaciones+i);
            ubicacion=i;
        }
    }
    return ubicacion;
}

int calificacion_minima(const int* calificaciones, int cantidad, int* minimo)
{
    int i,ubicacion;
    *minimo=11;
    for(i=0; i<cantidad; i++)
    {
        if(*(calificaciones+i)<*minimo)
        {
            *minimo=*(calificaciones+i);
            ubicacion=i;
        }
    }
    return ubicacion;
}
