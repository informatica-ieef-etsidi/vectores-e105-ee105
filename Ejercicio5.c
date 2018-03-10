//Programa que pide el valor de 20 datos de un vector y un numero cualquiera para comprobar si esta incluido
//Por Ismael Gómez Pacheco
#include <stdio.h>

void main() {
	int i, n;
	int contieneN = 0;
	int vector[20];
	for (i = 0; i < 20; i++) {
		printf("Introduzca la coordenada %d del vector\n", i + 1);
		scanf_s("%d", &vector[i]);
	}
	printf("Introduzca un numero para ver si esta contenido en el vector\n");
	scanf_s("%d", &n);
	system("cls");
	printf("Su vector es (");
	for (i = 0;i < 19;i++) {
		printf("%d, ", vector[i]);
	}
	printf("%d)\n", vector[19]);
	for (i = 0; i < 20; i++) {
		if (vector[i] == n){
			printf("El numero %d esta contenido en el vector\n", n);
			contieneN = 1;
			break;
		}
	}
	if (contieneN == 0) {
		printf("El numero %d no esta contenido en el vector\n", n);
	}
	system("pause");
}
