/*!
 * @file    funciones.h
 * @brief   Implementar una función que convierta un número que representa una cantidad total de segundos, a su equivalente en horas, minutos y
 *          segundos.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    08/06/2022
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_


/*!
 * @brief Convierte una cantidad total de segundos, a su equivalente en horas, minutos y segundos.
 * @param[in] total_segundos: Valor en grados decimales de entrada.
 * @param[out] horas: Puntero de salida utilizado para guardar el resultado.
 * @param[out] minutos: Puntero de salida utilizado para guardar el resultado.
 * @param[out] segundos: Puntero de salida utilizado para guardar el resultado.
 */
void a_sexagesimal(int, int*, int*, int*);


#endif // FUNCIONES_H_
