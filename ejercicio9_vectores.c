//desarrollador Javier Redondo
//programa para calcular cuantos numeros pares hay en un vector dado

#include <stdio.h>
#define LONGITUD 100

void main() {
	int vector[LONGITUD];
	int longitud, i, j=0;
	printf("Cuantos elementos tendra el vector?\n");
	scanf_s("%d", &longitud);
	for (i = 0; i < longitud; i++) {
		printf("Introduzca el valor numero %d\n", i + 1);
		scanf_s("%d", &vector[i]);
	}
	for (i = 0; i < longitud; i++) {
		if (vector[i] % 2 == 0) {
			j++;
		}
	}
	printf("Hay %d elementos pares\n", j);
	system("pause");
}