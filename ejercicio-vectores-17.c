#include <stdio.h>
#define TAMVECTOR 6

void main() {

	int vector[TAMVECTOR];
	int i, j, aux;

	for (i = 0; i < TAMVECTOR; i++) {
		printf("Introduce elemento %d\n", i + 1);
		scanf_s("%d", &vector[i]);
	}

	for (j = 0; j < TAMVECTOR / 2; j++) {
		aux = vector[j];
		vector[j] = vector[TAMVECTOR - j - 1];
		vector[TAMVECTOR - j - 1] = aux;
	}
	
	for (i = 0; i < TAMVECTOR; i++) {
		printf("%d \t", vector[i]);
	}

	system("PAUSE");
}