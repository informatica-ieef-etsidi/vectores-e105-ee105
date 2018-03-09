//Paula Arellano
/*Haz un programa que sume dos vectores y almacene el resultado en un tercer vector.*/
#include<stdio.h>
#define TAMVECTOR 3
void main() {
	int vector1[TAMVECTOR], vector2[TAMVECTOR], vector3[TAMVECTOR];
	int i;


	for (i = 0; i < TAMVECTOR; i++) {
		printf("Introduce la componente %d del primer vector: ", i + 1);
		scanf_s("%d", &vector1[i]);
		printf("\n");
	}

	for (i = 0; i < TAMVECTOR; i++) {
		printf("Introduce la componente %d del segundo vector: ", i + 1);
		scanf_s("%d", &vector2[i]);
		printf("\n");
	}

	for (i = 0; i < TAMVECTOR; i++) {
		vector3[i] = vector1[i] + vector2[i];
	}

	//Imprimir vector
	for (i = 0; i < TAMVECTOR; i++) {
		printf("vector2[%d]=%d\n", i, vector3[i]);
	}

	system("PAUSE");
}