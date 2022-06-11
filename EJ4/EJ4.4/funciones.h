/*!
 * @file    funciones.h
 * @brief   Implementar una función que reciba dos números enteros y una operación a realizar entre ellos.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    07/06/2022
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_


/*!
 * @brief Convierte un número en grados decimales, a su equivalente en grados, minutos y segundos.
 *
 * @param[in] x: Valor 1.
 * @param[in] y: Valor 2.
 * @param[in] operacion: Variable que recibe la operacion a ralizar.
 * @param[out] resultado: Puntero de salida utilizado para guardar el resultado.
 * @return	Devuelve ERROR_OPERACION_INVALIDA (1), ERROR_DIVISION_POR_CERO (2) y En caso de éxito EXITO (0).
 */
int calculadora(int, int, char, float*);

#endif // FUNCIONES_H_
