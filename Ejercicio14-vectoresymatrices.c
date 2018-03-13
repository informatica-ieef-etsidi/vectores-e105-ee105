#include <stdio.h>
#define N 10
/*EJERCICIO14.Haz un programa que cuente cuántos números primos hay en un vector*/
void main(){
	int v[N],i,j,aux=0,primos=0;
	printf("Introduzca un vector de %d componentes: \n",N);
	for(i=0;i<N;i++){
		scanf("%d",&v[i]);
	}
	for(i=0;i<N;i++){
		for(j=1;j<=v[i];j++){
		   aux+=(v[i]%j==0);//Si es verdadero se suma aux.
		   
	     } 
	     primos+=(aux==2);//Primos suma los números que tienen dos divisores, es decir, los primos. 
	     aux=0;
	}
	printf("El vector tiene %d primos. \n",primos);
	
}
