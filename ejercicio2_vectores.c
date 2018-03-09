//Paula Arellano
/*Haz un programa que lea 10 numeros por teclado, los almacene en un vector y
muestre la suma, resta multiplicacion y media de todos ellos*/

#include<stdio.h>
void main() {
	int vector[10];
	int i;
	int suma = 0, resta, multiplicacion = 1;
	float media = 0;

	for (i = 0; i < 10; i++) {
		printf("Introduce la componente %d: ", i + 1);
		scanf_s("%d", &vector[i]); 
		printf("\n");
	}

	//SUMA
	for (i = 0; i < 10; i++){
		suma = suma + vector[i];
	} 
	printf("Suma del vector= %d\n", suma);

	//RESTA
	resta = vector[0];
	for (i = 1; i < 10; i++) {
		resta = resta - vector[i];
	}
	printf("Resta del vector= %d\n", resta);

	//MULTIPLICACION
	for (i = 0; i < 10; i++) {
		multiplicacion = multiplicacion * vector[i];
	}
	printf("Multiplicacion del vector= %d\n", multiplicacion);

	//MEDIA
	for (i = 0; i < 10; i++) {
		media = media + vector[i];
	}
	media = media / 10;
	printf("Media del vector= %.2f\n", media);

	system("PAUSE");

}