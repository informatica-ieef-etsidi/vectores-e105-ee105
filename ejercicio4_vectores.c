//Paula Arellano
/*Haz un programa que lea 10 numeros por teclado y los guarde en un vector, luego los copie a otro vector 
multiplicados por dos y muestre por pantalla el segundo vector*/

#include<stdio.h>
void main() {
	int vector[10], vector2[10];
	int i;
	

	for (i = 0; i < 10; i++) {
		printf("Introduce la componente %d: ", i + 1);
		scanf_s("%d", &vector[i]);
		printf("\n");
	}

	for (i = 0; i < 10; i++) {
		vector2[i] = 2 * vector[i];
	}

	//Imprimir vector
	for (i = 0; i < 10; i++) {
		printf("vector2[%d]=%d\n", i, vector2[i]);
	}

	system("PAUSE");
}