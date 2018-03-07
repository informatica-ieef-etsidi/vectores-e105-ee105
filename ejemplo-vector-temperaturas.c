#include <stdio.h>

#define TAMVECTOR 12

void main() {
	// ESTA ES LA FORMA DE DECLARAR E INICIALIZAR UN VECTOR
	//float vectorTemp[12] = { 3.5, 5.8, 10.5, 13.8, 15.0, 20, 25, 30, 22, 18, 15, 5.0};
	float vectorTemp[TAMVECTOR];
	float media = 0;
	int i;

	for (i = 0; i < TAMVECTOR; i++) {
		printf("Introduce la temp media del mes %d\n", i+1);
		scanf_s("%f", &vectorTemp[i]);
	}

	for (i = 0; i < TAMVECTOR; i++) {
		media = media + vectorTemp[i];
	}
	media = media / TAMVECTOR;

	// PARA IMPRIMIR LAS COMPONENTES DEL VECTOR
	for (i = 0; i < TAMVECTOR; i++) {
		printf("vector[%d]=%f\n", i, vectorTemp[i]);
	}

	printf("Media del vector = %f\n", media);

	system("PAUSE");
}