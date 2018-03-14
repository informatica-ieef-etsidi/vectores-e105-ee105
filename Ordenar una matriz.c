//Desarrollado por Álvaro Monteagudo Pérez
//Programa para ordenar una matriz de menor a mayor o viceversa
//El numero de filas y columnas de la matriz son las tecleadas por el usuario
//con un maxino de 20 filas y 20 columnas

#include <stdio.h>
#define NFILAS 20
#define NCOLUMNAS 20

void main() {

	int matriz[NFILAS][NCOLUMNAS];
	int i, j, k, t, aux, filas, columnas, opcion;

	printf("Introduce el numero de filas:\n");
	scanf_s("%d", &filas);
	printf("Introduce el numero de columnas:\n");
	scanf_s("%d", &columnas);
	system("cls");

	for (i = 0; i < filas; i++) {
		for (j = 0; j < columnas; j++) {
			printf("Introduce el elemento de la matriz [%d][%d]\n", i + 1, j + 1);
			scanf_s("%d", &matriz[i][j]);
		}
	}

	system("cls");
	printf("La matriz introducida es:\n");

	for (i = 0; i < filas; i++) {
		for (j = 0; j < columnas; j++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}

	printf("Elige el orden:\nDe menor a mayor (1)\nDe mayor a menor (2)\n");
	scanf_s("%d", &opcion);

	switch (opcion) {
	case 1:
		for (i = 0; i < filas; i++) {
			for (j = 0; j < columnas; j++) {
				for (k = 0; k < filas; k++) {
					for (t = 0; t < columnas; t++) {
						if (matriz[k][t]>matriz[i][j]) {
							aux = matriz[i][j];
							matriz[i][j] = matriz[k][t];
							matriz[k][t] = aux;
						}
					}
				}
			}
		}

		printf("La matriz de menor a mayor es:\n");

		for (i = 0; i < filas; i++) {
			for (j = 0; j < columnas; j++) {
				printf("%d\t", matriz[i][j]);
			}
			printf("\n");
		}

		break;
	case 2:
		for (i = 0; i < filas; i++) {
			for (j = 0; j < columnas; j++) {
				for (k = 0; k < filas; k++) {
					for (t = 0; t < columnas; t++) {
						if (matriz[k][t]<matriz[i][j]) {
							aux = matriz[i][j];
							matriz[i][j] = matriz[k][t];
							matriz[k][t] = aux;
						}
					}
				}
			}
		}

		printf("La matriz de mayor a menor es:\n");

		for (i = 0; i < filas; i++) {
			for (j = 0; j < columnas; j++) {
				printf("%d\t", matriz[i][j]);
			}
			printf("\n");
		}

		break;
	default:
		printf("No existe esa opcion\n");
	}

	system("pause");

}

