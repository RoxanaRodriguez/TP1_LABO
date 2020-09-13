/*
 * 	utn.c
 *
 *  Created on: 12 sept. 2020
 *  Author: Roxana Rodriguez
 */

#include <stdio.h>
#include <stdlib.h>


char get_char(char *mensaje, char *usuarioIngreso, char errorMensaje, int reintentos) {
	int retorno = -1;
	char datoIngresado;
	int resultadoScanf;


	if (mensaje != NULL && usuarioIngreso!= NULL) {
		do {
			printf("%s\n", mensaje);
			fflush(stdin);
			resultadoScanf = scanf("%c", &datoIngresado);
			if (resultadoScanf == 1) {
				*usuarioIngreso = datoIngresado;
				retorno = 0;
				break;
			} else {
				reintentos--;
				if (reintentos != 0) {
					printf("Error, vuelva a intentar");
				}
			}

		} while (reintentos > 0);
	}
	return retorno;
}


int get_numero(char *mensaje, float *num1, int reintentos) {
	int retorno = -1;
	int numeroProvisorio;
	int resultadoScanf;
	if (mensaje != NULL && num1 != NULL) {
		do {
			printf("%s\n", mensaje);
			fflush(stdin);
			resultadoScanf = scanf(" %d", &numeroProvisorio);
			if (resultadoScanf == 1) {
				*num1 = numeroProvisorio;
				retorno = 0;
				break;
			} else {
				reintentos--;
				if (reintentos != 0) {
					printf("Error, %d reintentos mas\n", reintentos);
				}
			}

		} while (reintentos > 0);
	}
	return retorno;
}


void get_suma(float num1, float num2, float *resultado) {
	*resultado = num1 + num2;
}


void get_resta(float num1, float num2, float *resultado) {
	*resultado = num1 - num2;
}


int get_multiplicacion(float num1, float num2, float *resultado) {
	int retorno = -1;
	if (resultado != NULL) {
		*resultado = (num1 * num2);
		retorno = 0;
	}
	return retorno;
}

int get_division(float num1, float num2, float *resultado) {
	int retorno = -1;
	if (resultado != NULL && num2 != 0) {
			*resultado = num1 / num2;
			 retorno = 0;
		} else {
			printf("\nError, no se puede dividir por 0");
		}
	return retorno;
}

int get_factorial(float num1, float *resultado) {
	int retorno = -1;
	float auxResultado = 1;
    int i;

    if (resultado != NULL && num1>= 0)
    {
        for(i = num1; i > 0; i--)
        {
            auxResultado = auxResultado * i;
        }
        *resultado = auxResultado;
        retorno = 0;

	}
	return retorno;
}

