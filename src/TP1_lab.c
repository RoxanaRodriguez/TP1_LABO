/*
 ============================================================================
 Name        : TP1_lab.c
 Author      : Roxana Rodríguez Betbeze
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "utn.h"

int main(void) {

	setbuf(stdout,NULL);

	float numeroUno;
	float numeroDos;
	char menu;
	float resultado;
	char comienzo = 0;
	printf("Ingrese dos números \n");
	do {
		if (get_numero("Primer número: ", &numeroUno, 3) == 0) {
			if ((get_numero("Ingresá el segundo número: ", &numeroDos, 3) == 0)) {
				if (get_char("\nIndique la operación que desea realizar: \n\n[S] suma \n[R] resta \n[M] multiplicar \n[D] dividir \n[F] factorial \n[E] para salir \n", &menu, "Error, debes ingresar alguna de las opciones indicadas \n", 3) == 0) {
					if (menu == 'S' || menu == 'R' || menu == 'M' || menu == 'D' || menu == 'F' || menu == 'E') {
						switch (menu) {
						case 'S':
							get_suma(numeroUno, numeroDos, &resultado);
							printf("\nEl resultado de %.2f + %.2f es: %.2f. \n",numeroUno, numeroDos, resultado);
							break;
						case 'R':
							get_resta(numeroUno, numeroDos, &resultado);
							printf("El resultado de %.2f - %.2f es: %.2f. \n",numeroUno, numeroDos, resultado);
							break;
						case 'M':
							if (get_multiplicacion(numeroUno, numeroDos, &resultado)== 0) {
								printf("El resultado de %.2f x %.2f es: %.2f. \n",numeroUno, numeroDos, resultado);
							}
							break;
						case 'D':
							if (get_division(numeroUno, numeroDos, &resultado) == 0) {
								printf("El resultado de %.2f / %.2f es: %.2f. \n", numeroUno, numeroDos, resultado);
							}
							break;
						case 'F':
							if (get_factorial(numeroUno, &resultado) == 0) {
								printf("El resultado del factorial de %.0f es: %0.f \n", numeroUno, resultado);
							}
							 else {
								 printf("\nNo se puede calcular el factorial de un numero negativo.\n");
							 }
							if (get_factorial(numeroDos, &resultado) == 0) {
								printf("El resultado del factorial de %.0f es: %0.f \n", numeroDos, resultado);
							}
							 else {
								printf("\nNo se puede calcular el factorial de un numero negativo.\n");
							 }
							break;
						case 'E':
							printf("Muchas gracias, hasta luego");
							return EXIT_SUCCESS;
						}

					} else {
						printf("No ingresaste una opción correcta, intente nuevamente");
					}
				}
				if (get_char("¿Quiere continuar? \n Seleccione [E] para salir, caso contrario presione cualquier tecla\n", &menu, "Error", 2) == 0) {
					if (menu == 'E') {
						printf("Hasta pronto!");
						break;
					}
				}
			} else {
				printf("\n No tiene mas reintentos disponibles");
			}
		} else {
			printf("\n No tiene mas reintentos");
		}
	} while (comienzo == 0);

	return EXIT_SUCCESS;
}
