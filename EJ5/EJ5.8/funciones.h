/*!
 * @file    funciones.h
 * @brief   Implementar una función que reciba un arreglo y su longitud y retorne 1 si el mismo se encuentra ordenado (de menor a mayor) y 0 en
 *          caso contrario
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    10/06/2022
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#define VERDADERO 1
#define FALSO 0

/*!
 * @brief Función que recibe un arreglo y su longitud. 
 * @param[in] arreglo: Puntero de entrada que recibe un arreglo.
 * @param[in] largo: Variable de entrada que guarda la longitud del arreglo.
 * @return	Devuelve 1 si el mismo se encuentra ordenado (de menor a mayor) y 0 en
 *          caso contrario
 */
int esta_ordenado(const int* arreglo, int largo);


#endif // FUNCIONES_H_
