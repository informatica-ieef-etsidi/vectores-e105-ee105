//Desarrollador Jaier Redondo
//Programa que pide una matriz y despues pregunta que quieres imprimir si una fila o columna e imprime la que le digas.

#include <stdio.h>
#define FILAS 100 
#define COLUMNAS 100

void main() {
	int filas, columnas, i, j, opcion2;
	char opcion1;
	float matriz[FILAS][COLUMNAS];
	printf("Introduzca el numero de filas de la matriz:\n");
	scanf_s("%d", &filas);
	printf("Introduzca el numero de columnas de la matriz:\n");
	scanf_s("%d", &columnas);
	for (i = 0; i < filas; i++) {
		for (j = 0; j < columnas; j++) {
			printf("Introduzca el elemento (%d,%d):\n", i + 1, j + 1);
			scanf_s("%f", &matriz[i][j]);
		}
	}
	do {
	printf("Quieres imprimir una fila o una columna?\nPulsa:\n\tF >>Fila\n\tC >>Columna\n");
	getchar();
	scanf_s("%c", &opcion1);
		switch (opcion1) {
		case 'F':
		case 'f':
			do {
				printf("Que fila quieres imprimir?\n");
				scanf_s("%d", &opcion2);
				if (opcion2 > filas) {
					printf("Error, input exceeds matrix dimensions.\n");
				}
			} while (opcion2 > filas);
			printf("(");
			for (i = 0; i < columnas; i++) {
				printf("%f   ", matriz[opcion2-1][i]);
			}
			printf(")");
			break;
		case 'C':
		case 'c':
			do {
				printf("Que columna quieres imprimir?\n");
				scanf_s("%d", &opcion2);
				if (opcion2 > columnas) {
					printf("Error, input exceeds matrix dimensions.\n");
				}
			} while (opcion2 > columnas);
			for (i = 0; i < filas; i++) {
				printf("( %f )\n", matriz[i-1][opcion2]);
			}
			break;
		default:
			printf("Eso no es una opcion.\n");
		}
	} while (opcion1 != 'f' && opcion1 != 'F' && opcion1 != 'c' && opcion1 != 'C');
	system("pause");
}