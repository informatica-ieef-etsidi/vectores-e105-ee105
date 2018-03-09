//Paula Arellano
/*Haz un programa que almacene en un vector el factorial de los numeros entre 0 y 10 y se pueda 
preguntar al usuario que escoja de que numero quiere pedir el factorial, para lo cual se consultara simplemente
el vector e imprimira el resultado. El programa debe indicar un mensaje de error si el numero no esta en el rango 
de 0 a 10 y pedirá otro número*/

#include<stdio.h>
void main() {
	int factorial[11] = { 0,1,1,1,1,1,1,1,1,1,1 };
	int i, numero;

	/*for (i = 0; i < 11; i++) {
		printf("Introduce la componente %d: ", i + 1);
		scanf_s("%d", &vector[i]);
		printf("\n");
		
		}
	} */

	for (i = 2; i < 10; i++) {
		factorial[i] = factorial[i-1] * i;
	}

	printf("Introduzca una cifra del 0 al 10: ");
	scanf_s("%d", &numero);
	printf("\n");

	if (numero < 0 || numero>10) {
		printf("Introduzca otro numero entre el 0 y el 10:  ");
		scanf_s("%d", &numero);
	}

		printf("Factorial de %d = %d\n", numero, factorial[numero]);


	system("PAUSE");
}