/*Ejercicio	3: Introduzca	dos	vectores	de	5	elementos, realice	la	suma	del	primer	elemento	del
vector	 1	 con	 el	 último	 del	 vector	 2, el	 segundo	 elemento	 del	 vector	 con	 el	 anteúltimo
elemento	del	vector	2	y	así	sucesivamente.Imprima	el	nuevo	vector.*/

//hecho de dos formas:
//esta suma directamente el primero con el ultimo tal como dice el enunciado

/*
#include<stdio.h>
#include<stdlib.h>
#define TAMV 5
void main() {

	int vector1[TAMV], vector2[TAMV],vectorsuma[5];
	int j, i;

	printf("Introduzca su primer vector.\n");

	for (i = 0; i < TAMV;i++) {
		printf("Introduza el elemento %d:", i + 1);
		scanf_s("%d", &vector1[i]);
		printf("\n");
	}
	//system("cls");
	
	printf("Introduzca su segundo vector.\n");

	for (i = 0; i < TAMV;i++) {
		printf("Introduza el elemento %d:", i + 1);
		scanf_s("%d", &vector2[i]);
		printf("\n");
	}
	//system("cls");
	j = 4;
	for (i = 0;i < TAMV;i++) {
		vectorsuma[i] = vector1[i] + vector2[j];
		j--;
	}
	printf("\n \n");
	for (i = 0; i < TAMV;i++) {
		printf("%d\t", vectorsuma[i]);
	}

	system("PAUSE");
}
*/
//esta da la vuelta al segundo y suma como dos vectores normales

#include<stdio.h>
#include<stdlib.h>
#define TAMV 5

void main() {

	int vector1[TAMV], vector2[TAMV], vectorsuma[5];
	int aux, j, i;

	printf("Introduzca su primer vector.\n");

	for (i = 0; i < TAMV;i++) {
		printf("Introduza el elemento %d:", i + 1);
		scanf_s("%d", &vector1[i]);
		printf("\n");
	}
	//system("cls");

	printf("Introduzca su segundo vector.\n");

	for (i = 0; i < TAMV;i++) {
		printf("Introduza el elemento %d:", i + 1);
		scanf_s("%d", &vector2[i]);
		printf("\n");
	}
	j = 4;
	for (i = 0;i < TAMV/2;i++) {
		aux = vector2[i];
		vector2[i] = vector2[j];
		vector2[j] = aux;
		j--;
	}
	for (i = 0;i < TAMV;i++) {
		vectorsuma[i] = vector1[i] + vector2[i];
	}
	for (i = 0;i < TAMV;i++) {
		printf("%d\t", vectorsuma[i]);
	}
	system("PAUSE");
}