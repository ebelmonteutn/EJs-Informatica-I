/*!
 * @file    main.c
 * @brief   Programa que pide el número de legajo (entero de 8 cifras) y la calificación de un examen de los estudiantes de un curso. El
fin de ingreso de datos se indica con el ingreso de un legajo igual a cero.
 * @author  Nombre del autor <email del autor>
 * @date    15/05/2022
 * @details Instrucciones para compilar y linkear la aplicación.
 */
#include <stdio.h>

int main(void)
{
    unsigned int legajo;
    int nota=0,cant=0,max=0,min=10,aprobados=0,desaprobados=0,notatotal=0;
    int ss=0,mb=0,b=0,r=0,i=0;
    float promedio=0;

    while(legajo != 0){
        printf("Ingrese el numero de legajo, para finalizar ingrese \"0\" \n");
        scanf("%d",&legajo);
        if(legajo != 0){
            printf("Ingrese la nota del examen \n");
            scanf("%d",&nota);
            while(nota<1 ||nota>10){
                printf("La nota debe estar entre 1 y 10\n");
                printf("Ingrese la nota del examen \n");
                scanf("%d",&nota);
            }
            notatotal=notatotal+nota;
            cant++;
            if(nota==10){
                 ss++;
            }
            else if(nota==9 ||nota==8){
                mb++;
            }
            else if(nota==6 ||nota==7){
                b++;
            }
            else if(nota==4 ||nota==5){
                r++;
            }
            else if(nota>=1 && nota<=3){
                i++;
            }

            if(nota>max){
               max=nota;
            }
            if(nota<min){
                min=nota;
            }

            if(nota>=6){
                aprobados++;
            }
            else{
                desaprobados++;
            }
        }
                 
    }
    promedio=((float)notatotal)/cant;
    printf("El promedio de los examenes es : %.2f  \n",promedio);
    printf("La nota maxima es : %d  \n",max);
    printf("La nota minima es : %d  \n",min);
    printf("La cantidad de aprobados es : %d  \n",aprobados);
    printf("La cantidad de desaprobados es : %d  \n",desaprobados);

    printf("\nLa cantidad de Sobresalientes es : %d  \n",ss);
    printf("La cantidad de Muy bueno es : %d  \n",mb);
    printf("La cantidad de Bueno es : %d  \n",b);
    printf("La cantidad de Regular es : %d  \n",r);
    printf("La cantidad de Insuficiente es : %d  \n",i);
    return 0;
}
