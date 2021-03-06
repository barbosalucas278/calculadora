/*
 * func.h
 *
 *  Created on: 2 abr. 2020
 *      Author: Lucas Barbosa
 */

#ifndef FUNC_H_
#define FUNC_H_
#define MIN -2147483647
#define MAX 2147483647
#define MAX_ARRAY_CHAR 4068

#endif /* FUNC_H_ */


int Sumar (long x, long y, long* pResultado);

int Restar (long x, long y, long* pResultado);

int Dividir (long x, long y, float* pResultado);

int Multiplicar (long x, long y, long* pRestulado);

int Factorial (long x, double* pResultado);

int get_Number (long* pResultado, char* mensaje, char* mensajeError, long min, long max, int reintentos);


