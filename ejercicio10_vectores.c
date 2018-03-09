//Paula Arellano
/*Haz un programa que imprima sólo los elementos del triangulo superior de una matriz.*/

#include<stdio.h>
#define NFILAS 3
#define NCOLUMNAS 3

void main() {

	int matriz[3][3];
	int i, j, fila, columna;

	//Solicitar los datos de la matriz
	for (i = 0; i < NFILAS; i++) {
		for (j = 0; j < NCOLUMNAS; j++) {
			printf("Introduce el elemento matriz [%d][%d]:  ", i + 1, j + 1);
			scanf_s("%d", &matriz[i][j]);
			printf_s("\n");
		}
	}

	//Imprimir matriz
	for (i = 0; i < NFILAS; i++) {
		for (j = 0; j < NCOLUMNAS; j++) {
			if (j>=i)
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

	printf("El elemento en la posicion %d, %d es: %d\n", fila, columna, matriz[fila - 1][columna - 1]);

	system("PAUSE");
}