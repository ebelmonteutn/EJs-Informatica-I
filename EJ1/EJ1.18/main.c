/*!
 * @file    main.c
 * @brief   Programa donde se ingresa por teclado un par de valores reales (x,y), que representan las coordenadas cartesianas de
            distintos puntos del plano R2.
 * @author  Enzo Belmonte ebelmonte@frba.utn.edu.ar
 * @date    18/05/2022
 * @details Instrucciones para compilar y linkear la aplicación: 1er comando: gcc -c main.c -o main.o -Wall
 *                                                               2do comando: gcc main.o -o EJ1.18 -lm
 *                                                               3er comando: ./EJ1.18
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
    float x,y,d;

    printf("Ingrese la cordenada X del vector en R2\n");
    scanf("%f",&x);
    printf("Ingrese la cordenada Y del vector en R2\n");
    scanf("%f",&y);

    if(x==0 && y==0)
    {
        printf("El punto esta en el origen de cordenadas\n");
    }
    else if(x==0)
    {
        printf("El punto esta sobre el eje Y\n");
    }
    else if(y==0)
    {
        printf("El punto esta sobre el eje X\n");
    }
    else if(x>0 && y>0)
    {
        printf("El punto pertenece al primer cuadrante\n");
    }
    else if(x<0 && y>0)
    {
        printf("El punto pertenece al segundo cuadrante\n");
    }
    else if(x<0 && y<0)
    {
        printf("El punto pertenece al tercer cuadrante\n");
    }
    else if(x>0 && y<0)
    {
        printf("El punto pertenece al cuarto cuadrante\n");
    }
    d=sqrt((x*x)+(y*y));
    printf("La distancia al origen de cordenadas del P(%.3f,%.3f)=%.3f \n",x,y,d);
    return 0;
}
