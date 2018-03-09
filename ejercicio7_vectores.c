//Paula Arellano
/*Haz un programa que lea 9 números y rellene una matriz de tamaño 3x3, la muestre por pantalla 
y después que pida una posición X, Y y muestre el número correspondiente.*/

#include<stdio.h>

void main() {

	int matriz[3][3];
	int i, j, fila, columna;

	//Solicitar los datos de la matriz
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("Introduce el elemento matriz [%d][%d]:  ", i + 1, j + 1);
			scanf_s("%d", &matriz[i][j]);
			printf_s("\n");
		}
	}

	//Imprimir matriz
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n\n");
	}

	printf("Introduzca la fila del elemento que desea consultar: ");
		scanf_s("%d", &fila);
		printf_s("\n");
		printf("Introduzca la columna del elemento que desea consultar: ");
		scanf_s("%d", &columna);
		printf_s("\n");

		printf("El elemento en la posicion %d, %d es: %d\n", fila, columna, matriz[fila-1][columna-1]);

	system("PAUSE");
}