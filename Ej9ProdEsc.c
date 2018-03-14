//Marcos Velázquez Ruiz
//Programa para calcular el producto escalar de dos vectores de 3 componentes

#include <stdio.h>

void main() {

	int vector1[2];
	int vector2[2];
	int i, j;
	int escalar; 

	//Introduzco los vectores
	for (i = 0; i <= 2; i++) {
		printf("Introduce el elemento %d del vector 1\n", i + 1);
		scanf_s("%d", &vector1[i]);
	}
	for (j = 0; j <= 2; j++) {
		printf("Introduce el elemento %d del vector 2\n", j + 1);
		scanf_s("%d", &vector2[j]);
	}

	system("cls");

	//Imprimo los vectores
	printf("El vector 1 es:");
	for (i = 0; i <= 2; i++) {
		printf("%d ", vector1[i]);
	}
	printf("\n");

	printf("El vector 2 es:");
	for (j = 0; j <= 2; j++) {
		printf("%d ", vector2[j]);
	}
	printf("\n");

	//Calculo el producto escalar
	escalar = vector1[0] * vector2[0] + vector1[1] * vector2[1] + vector1[2] * vector2[2];

	printf("El producto escalar es %d\n", escalar);

	system("pause");
}