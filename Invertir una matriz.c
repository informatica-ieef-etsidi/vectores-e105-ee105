//Desarrollado por Álvaro Monteagudo Pérez
//Este programa invierte una matriz de las filas y columnas que introduzcas con un
//maximo de 20 filas y 20 columnas

#include <stdio.h>
#define NFILAS 20
#define NCOLUMNAS 20

void main() {

	int matriz[NFILAS][NCOLUMNAS];
	int i, j, k, t, aux, filas, columnas;
	int x; //Mas alante la uso para llegar a la mediana de la matriz
	int y = 0; //segun tienen lugar los bucles le sumo 1 para llegar a dicha mediana

	printf("Introduce el numero de filas:\n");
	scanf_s("%d", &filas);
	printf("Introduce el numero de columnas:\n");
	scanf_s("%d", &columnas);
	system("cls");

	for (i = 0; i < filas; i++) {
		for (j = 0; j < columnas; j++) {
			printf("Introduce la coordenada [%d][%d]\n", i + 1, j + 1);
			scanf_s("%d", &matriz[i][j]);
		}
	}
	
	system("cls");
	printf("Su matriz es:\n");

	for (i = 0; i < filas; i++) {
		for (j = 0; j < columnas; j++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}

	x = (filas * columnas)/2;

	for (i = 0; i < filas; i++) {
		for (j = 0; j < columnas; j++) {
			y++;
			if(y<=x) {
				k = filas - i - 1;
				t = columnas - j - 1;
				aux = matriz[i][j];
				matriz[i][j] = matriz[k][t];
				matriz[k][t] = aux;
			}
		}
	}

	printf("Su matriz invertida es:\n");

	for (i = 0; i < filas; i++) {
		for (j = 0; j < columnas; j++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}

	system("pause");
}