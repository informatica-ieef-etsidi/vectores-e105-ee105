#include <stdio.h>
#define NFILAS 2
#define NCOLS 1

void main() {

	// Matriz de 3x4 
	int matriz[NFILAS][NCOLS]; // = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
	int i,j;

	// Solicitar los datos de una matriz
	for (i = 0; i < NFILAS; i++) {
		for (j = 0; j < NCOLS; j++) {
			printf("Introduce elemento matriz[%d][%d]\n", i+1, j+1);
			scanf_s("%d", &matriz[i][j]);
		}
	}

	// Imprimir una matriz
	for (i = 0; i < NFILAS; i++) {
		for (j = 0; j < NCOLS; j++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	system("PAUSE");
}