/*!
 * @file    funciones.h
 * @brief   Desarrolle un programa que solicite el ingreso de las calificaciones (como número enteros) del primer parcial de los estudiantes de
 *          Informática 1. El ingreso de calificaciones finalizará cuando se ingrese un once (11). Tener en cuenta que las calificaciones deberán ser
 *          números comprendidos entre 0 y 10 (0 significa ausente), por lo que se debe validar la carga de datos. Se podrán ingresar como máximo
 *          25 calificaciones.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    10/06/2022
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_


/*!
 * @brief Función que devuelve la cantidad de aprobados, desaprobados y ausentes (nota de aprobación: 6). 
 * @param[in] arreglo: Puntero de entrada que recibe un arreglo.
 * @param[in] largo: Variable de entrada que guarda la longitud del arreglo.
 * @return	Devuelve 1 si el mismo se encuentra ordenado (de menor a mayor) y 0 en
 *          caso contrario
 */
void clasificar_calificaciones(const int* calificaciones, int cantidad, int* aprobados, int*desaprobados, int* ausentes);
/*!
 * @brief Función que devuelve la cantidad de aprobados, desaprobados y ausentes (nota de aprobación: 6). 
 * @param[in] arreglo: Puntero de entrada que recibe un arreglo.
 * @param[in] largo: Variable de entrada que guarda la longitud del arreglo.
 * @return	Devuelve 1 si el mismo se encuentra ordenado (de menor a mayor) y 0 en
 *          caso contrario
 */
float promedio_con_ausentes(const int* calificaciones, int cantidad);
/*!
 * @brief Función que devuelve la cantidad de aprobados, desaprobados y ausentes (nota de aprobación: 6). 
 * @param[in] arreglo: Puntero de entrada que recibe un arreglo.
 * @param[in] largo: Variable de entrada que guarda la longitud del arreglo.
 * @return	Devuelve 1 si el mismo se encuentra ordenado (de menor a mayor) y 0 en
 *          caso contrario
 */
float promedio_sin_ausentes(const int* calificaciones, int cantidad);
/*!
 * @brief Función que devuelve la cantidad de aprobados, desaprobados y ausentes (nota de aprobación: 6). 
 * @param[in] arreglo: Puntero de entrada que recibe un arreglo.
 * @param[in] largo: Variable de entrada que guarda la longitud del arreglo.
 * @return	Devuelve 1 si el mismo se encuentra ordenado (de menor a mayor) y 0 en
 *          caso contrario
 */
int calificacion_maxima(const int* calificaciones, int cantidad, int* maximo);
/*!
 * @brief Función que devuelve la cantidad de aprobados, desaprobados y ausentes (nota de aprobación: 6). 
 * @param[in] arreglo: Puntero de entrada que recibe un arreglo.
 * @param[in] largo: Variable de entrada que guarda la longitud del arreglo.
 * @return	Devuelve 1 si el mismo se encuentra ordenado (de menor a mayor) y 0 en
 *          caso contrario
 */
int calificacion_minima(const int* calificaciones, int cantidad, int* minimo);
#endif // FUNCIONES_H_
