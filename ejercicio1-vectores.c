// Declare	 y	 defina	 un	 vector	 de	 5	 elementos.	 Pida	 al	 usuario	 otro	 vector	 de	 cinco	
// elementos.	Sume	ambos	vectores	y	calcule	la	media.	Imprima	el	resultado.
//Desarrollador:Ana Dueñas
//Ejercicio 1  de Vectores

#include <stdio.h>

void main() {
	
	float v1[6] = { 1,3,2,4,5 }; //Vector declarado y definido
	float v2[6]; //Vector que se va a escanear
	float v3[6],sumatorio=0; //vector resultado de la suma y variable auxiliar para realizar la media
	int i;
	
	printf("Introduzca un vector de 5 elementos para sumarselo a uno predeterminado y obtener la media\n");
	
	for (i = 0; i<5; i++){ //Bucle para escanear el  y hacer la suma
		scanf_s("%f", &v2[i],6);
	
		v3[i] = v1[i] + v2[i];

	}
	printf("La suma de los vectores es:\n"); 
	for (i = 0; i < 5; i++) {// Bucle para imprimir la suma
		printf("%.0f\t", v3[i]);
	
		
		
	}
	printf("\n");
	for (i = 0; i < 5; i++) { //bucle para hacer la media
		sumatorio = v3[i] + sumatorio;
		

	}
	printf("La media del vector es:%.3f\n", sumatorio / 5);
	system("pause");
}
