// Creador: Gonzalo Sánchez Delgado
// Calcula el elemento mayor de una matriz después de que el usuario los haya introducido

#include <stdio.h>
#include <stdlib.h>
#define NFILAS 4
#define NCOLS 3


void main() {

	//matriz de 4x3
	int matriz[NFILAS][NCOLS]; 
	int maximo, i, j;

	//calcular maximo de una matriz
	for (i = 0; i < NFILAS; i++) {
		for (j = 0; j < NCOLS; j++) {
			printf("Introduce elemento matriz [%d][%d]\n", i + 1, j + 1);
			scanf_s("%d", &matriz[i][j]);
		}
	}

	maximo = matriz[0][0];

	//Imprimir una matriz

	for (i = 0; i < NFILAS; i++) {
		for (j = 0; j < NCOLS; j++) {
			if (matriz[i][j] > maximo)
				maximo = matriz[i][j];
		}
	}
	printf("maximo de la matriz: %d\n", maximo);

	system("PAUSE");
}