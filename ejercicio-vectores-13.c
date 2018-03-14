#include <stdio.h>
#define NFILAS 3
#define NCOLS 2

void main() {

	int matriz[NFILAS][NCOLS]; 
	int i,j;
	int minimo;

	// Solicitar los datos de una matriz
	for (i = 0; i < NFILAS; i++) {
		for (j = 0; j < NCOLS; j++) {
			printf("Introduce elemento matriz[%d][%d]\n", i+1, j+1);
			scanf_s("%d", &matriz[i][j]);
		}
	}

	minimo = matriz[0][0];

	// Calcular minimo de una matriz
	for (i = 0; i < NFILAS; i++) {
		for (j = 0; j < NCOLS; j++) {
			if (matriz[i][j] < minimo)
				minimo = matriz[i][j];
		}
	}

	printf("Minimo: %d\n", minimo);
	
	system("PAUSE");
}