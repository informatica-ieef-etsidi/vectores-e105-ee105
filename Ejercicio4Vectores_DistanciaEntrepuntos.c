//Desarrollador: Ana Dueñas
//Calcule	 la	 distancia	entre	 dos	 puntos	 del	espacio	 utilizando	 vectores.	 Imprima	 la	
//distancia	calculada.
#include <stdio.h>
#include <math.h> //librería para utilizar la raiz
void main() {
	float v1[3], v2[3],v3[3],distancia=0; //inicializamos distancia
	int i;
	printf("Introduzca las 3 coordenadas del primer vector:\n");
		 for (i = 0; i < 3; i++) {
			 scanf_s("%f", &v1[i], 3);

		 }
		 
	 printf("Introduzca las 3 coordenadas del segundo vector:\n");
		 for (i = 0; i < 3; i++) {
			 scanf_s("%f", &v2[i], 3);

		 }
		 for (i = 0; i < 3; i++) { //Bucle que guarda el vector director entre los puntos
			 v3[i]=v1[i]-v2[i];

		 }
		 for (i = 0; i < 3; i++) { //Bucle que calcula el cuadrado del modulo del vector director
			 distancia=distancia+v3[i]*v3[i];

		 }
		 printf("La distancia entre ambos puntos es de :%.3f\n", sqrt(distancia));

		 system("pause");
}