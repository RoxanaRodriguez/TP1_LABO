/*
 * 	utn.h
 *
 *  Created on: 12 sept. 2020
 *  Author: R
 */

#ifndef UTN_H_
#define UTN_H_


char get_char(char *mensaje, char *usuarioIngreso, char errorMensaje, int intentos);

int get_numero(char *mensaje, float *num1, int intentos);

void get_suma(float num1, float num2, float *resultado);

void get_resta(float num1, float num2, float *resultado);

int get_multiplicacion(float num1, float num2, float *resultado);

int get_division(float num1, float num2, float *resultado);

int get_factorial(float num1, float *resultado);

#endif

