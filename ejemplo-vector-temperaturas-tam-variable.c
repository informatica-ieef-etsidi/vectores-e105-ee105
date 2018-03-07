#include <stdio.h>

#define TAMVECTOR 100

void main() {
	// ESTA ES LA FORMA DE DECLARAR E INICIALIZAR UN VECTOR
	//float vectorTemp[12] = { 3.5, 5.8, 10.5, 13.8, 15.0, 20, 25, 30, 22, 18, 15, 5.0};
	float vectorTemp[TAMVECTOR];
	float media = 0, maximo;
	int i, numeroTemperaturas;

	printf("Introduce cuantas temperaturas tienes\n");
	scanf_s("%d", &numeroTemperaturas);
	
	for (i = 0; i < numeroTemperaturas; i++) {
		printf("Introduce la temp media %d\n", i+1);
		scanf_s("%f", &vectorTemp[i]);
	}

	for (i = 0; i < numeroTemperaturas; i++) {
		media = media + vectorTemp[i];
	}
	media = media / numeroTemperaturas;

	// PARA IMPRIMIR LAS COMPONENTES DEL VECTOR
	for (i = 0; i < numeroTemperaturas; i++) {
		printf("vector[%d]=%f\n", i, vectorTemp[i]);
	}

	printf("Media del vector = %f\n", media);

	// CALCULAR EL MAXIMO DE UN VECTOR
	maximo = vectorTemp[0]; // Inicializo maximo al primer elemento
	for (i = 1; i < numeroTemperaturas; i++) { // La i empieza en 1
		if (vectorTemp[i] > maximo)
			maximo = vectorTemp[i];
	}
	printf("Maximo del vector es = %f\n", maximo);

	system("PAUSE");
}