#include <stdio.h>
#define N 3 //Por si se quieren introducir más componentes en el vector.
/*EJERCICIO14.Haz un programa que cuente cuántos números primos hay en un vector.*/
void main() {
	int v[N], i, primos=0;//vector,contador y variable que suma los numeros primos.
	printf("Introduzca un vector de %d componentes: \n", N);
	for (i = 0;i < N;i++) {//pedimos por teclado las componentes del vector.
		scanf_s("%d", &v[i]);
	}
	for(i=0;i<N;i++){
	
		primos+=v[i]%2!=0;//si se cumple esa condición el resultado es verdadero y por tanto es uno.Primos suma las veces que es verdadero
	}
	printf("Hay %d numeros primos. \n",primos);
				
		

	system("PAUSE");
}
