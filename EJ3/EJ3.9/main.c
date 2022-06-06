/*!
 * @file    main.c
 * @brief   Implementar una función que dado un número entero en sistema decimal, imprima por pantalla el polinomio correspondiente de su
 *          equivalente en sistema binario, octal o hexadecimal según se solicite.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    02/06/2022
 * @details Instrucciones para compilar y linkear la aplicación: 1er comando: gcc -c main.c -o main.o -Wall
 *                                                               2do comando: gcc main.o -o EJ3.9
 *                                                               3er comando: ./EJ3.9
 */
#include <stdio.h>

void descomponer_numero(int, int);

int main(void)
{
    descomponer_numero(255,1);
    return 0;
}

void descomponer_numero(int numero, int sistema)
{
    int num=0,numero2=0;
    int contador=0;
    switch(sistema){
        case 0://binario
            numero2=numero;
            while(numero2!=0)
            {   
                num=numero2%2;
                numero2=numero2/2;
                if(numero2!=0)
                {
                    printf("%d*2^%d + ",num,contador++);
                }
                else
                {
                    printf("%d*2^%d ",num,contador++);
                }
            }
            printf("= %d\n",numero);    
            break;
        case 1://octal
            numero2=numero;
            while(numero2!=0)
            {
                num=numero2%8;
                numero2=numero2/8;
                if(numero2!=0)
                {
                    printf("%d*8^%d + ",num,contador++);
                }
                else
                {
                    printf("%d*8^%d ",num,contador++);
                }   
            }
            printf("= %d\n",numero); 
            break;
        case 2://hexadecimal
            numero2=numero;
            while(numero2!=0)
            {
                num=numero2%16;
                numero2=numero2/16;
                if(num==15){
                    printf("F");
                }
                else if(num==14){
                    printf("E");
                }
                else if(num==13){
                    printf("D");
                }
                else if(num==12){
                    printf("C");
                }
                else if(num==11){
                    printf("B");
                }
                else if(num==10){
                    printf("A");
                }
                else{
                    printf("%d",num);
                }

                if(numero2!=0)
                {
                    printf("*16^%d + ",contador++);
                }
                else
                {
                    printf("*16^%d ",contador++);
                }   
            }
            printf("= %d\n",numero); 
            break;
        default:
            printf("Debe ingresar un sistema valido\n");
    }
}