//Paula Arellano
//Ordena las componentes del vector de forma ascendente y descendente

#include <stdio.h>

void main() {

	int vector[4];
	int i, j, aux;
	char opcion;

	for (i = 0; i < 4; i++) {

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
		for (i = 0; i < 3; i++) {
				for (j = i + 1; j < 4; j++) {
					if (vector[i] > vector[j]) {
					aux = vector[i];
					vector[i] = vector[j];
					vector[j] = aux;
					}
				}
		}
		break;

	case 'B': 
		for (i = 0; i < 3; i++) {
			for (j = i + 1; j < 4; j++) {
				if (vector[i] < vector[j]) {
					aux = vector[i];
					vector[i] = vector[j];
					vector[j] = aux;
				}
			}
		}
	}

	

	printf("Vector:");
	for (i = 0; i < 4; i++)
		printf("%d,  ", vector[i]);
	printf("\n");

	system("PAUSE");
}
