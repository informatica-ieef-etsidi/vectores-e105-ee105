//Programa que dada una matriz calcula su traspuesta
//Por Ismael Gómez Pacheco
#include <stdio.h>
void main() {
#define NFILAS 3
#define NCOLUMNAS 3
	int matriz[NFILAS][NCOLUMNAS];
	int i, j;
	printf("Introduzca los valores de la matriz\n");
	for (i = 0;i < NFILAS;i++) {
		for (j = 0;j < NCOLUMNAS;j++) {
			printf("[%d][%d]\n", i + 1, j + 1);
			scanf_s("%d", &matriz[i][j]);
		}
	}
	system("cls");
	printf("Su matriz es:\n");
	for (i = 0;i < NFILAS;i++) {
		for (j = 0;j < NCOLUMNAS;j++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("La matriz traspuesta es:\n");
	for (i = 0;i < NFILAS;i++) {
		for (j = 0;j < NCOLUMNAS;j++) {
			printf("%d\t", matriz[j][i]);
		}
		printf("\n");
	}
	system("pause");
}