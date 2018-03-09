// Paula Arellano
/*Haz un programa que imprima sólo los elementos de la diagonal de una matriz*/

//Antes de compilar el codigo, definir el numero de filas y de columnas de la matriz

#include<stdio.h>
#define NFILAS 3
#define NCOLUMNAS 3

void main() {

	int matriz[NFILAS][NCOLUMNAS];
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
			if (i==j)
			printf("%d", matriz[i][j]);
		}
		printf("\n\n");
	}


	system("PAUSE");
}