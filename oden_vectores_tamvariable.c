#include <stdio.h>
#define TAMVECTOR 100

void main() {
	int vector[TAMVECTOR];
	int i, j, componentes, aux;
	char opcion;

	printf("Introduce el numero de componentes:  ");
	scanf_s("%d", &componentes);
	printf("\n");


	for (i = 0; i < componentes; i++) {

		printf("Introduce la componente %d:  ", i + 1);
		scanf_s("%d", &vector[i]);
		printf("\n");
	}

		getchar();
		printf("Pulse A si desea ordenarlo de menor a mayor: \n");
		printf("Pulse B si desea ordenarlo de mayor a menor: \n");
		scanf_s("%c", &opcion);

		//Pasar numersos de mayuscula a minuscula
		if (opcion >= 'a'&& opcion <= 'z') {
			opcion -= 32;
		}


		switch (opcion) {

		case 'A':
			for (i = 0; i < componentes; i++) {
				for (j = i + 1; j < componentes; j++) { // por que aqui componentes y no componente-1
					if (vector[i] > vector[j]) {
						aux = vector[i];
						vector[i] = vector[j];
						vector[j] = aux;
					}
				}
			}
			break;

		case 'B':
			for (i = 0; i < componentes; i++) {
				for (j = i + 1; j < componentes; j++) {
					if (vector[i] < vector[j]) {
						aux = vector[j];
						vector[j] = vector[i];
						vector[i] = aux;
					}
				}
			}
		}



		printf("Vector:");
		for (i = 0; i < componentes; i++)
			printf("%d,  ", vector[i]);
		printf("\n");

		system("PAUSE");
	}