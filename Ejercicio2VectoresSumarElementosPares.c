//Desarrollador: Ana Dueñas
//: Introduzca	 un	 vector	 de	 10	 elementos	 y	 sume	 únicamente	 los	 elementos	 que	
//ocupan	posiciones	pares(considere	al	elemento	0	como	par)	y	guárdelo	en	un	nuevo	vector.
//Imprima	el	vector	resultante.
//Interpretacion del enunciado: el vector resultante lleva:
//En la posicion 0 la suma de los pares del vector 1
//El resto de posiciones recolocadas del vector 1
#include <stdio.h>
void main() {
	 int v1[11];
	 int v2[7];
	 int i,h,sumatorio=0;
	 printf("Introduzca un vector de 10 elementos:\n");
	 for (i = 0; i < 10; i++) {
		
			 scanf_s("%d", &v1[i], 11);
		 
			
		 if (i % 2 == 0 ) { //Si la posicion es par se suma al sumatorio
			 
			 sumatorio = v1[i] + sumatorio;
			
			 
		 }
	 }
	 printf("El sumatorio de los numeros en posiciones pares es:\n %d\n", sumatorio);
	 printf("El vector final es:\n");
	 printf("%d\t", sumatorio);
	 for (i=1; i < 10; i++) {//bucle para imprimir el nuevo vector
		 //Sabiendo que hay ahora 6 posiciones
		 if (i % 2 != 0) { //Si la posicion es par se suma al sumatorio

			 
			 printf("%d\t", v1[i]);

		 }
		 
		 
	 }
	 printf("\n");
	 system("pause");
}