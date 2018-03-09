//DESARROLADO POR: ALFONSO PINTO
//EL PROGRAMA GENERA UN TABLERO DE AJEDREZ USANDO UNA MATRIZ


#include<stdio.h>


void main() {
	char tablero[9][10] = { {'8','|','T','C','A','D','R','A','C','T'} ,{'7','|','P','P', 'P', 'P', 'P', 'P', 'P', 'P'}, {'6','|',' ',' ', ' ', ' ', ' ', ' ', ' ', ' '}, {'5','|',' ',' ', ' ', ' ', ' ', ' ', ' ', ' ' } ,{ '4','|',' ',' ', ' ', ' ', ' ', ' ', ' ', ' ' }, {'3','|',' ',' ', ' ', ' ', ' ', ' ', ' ', ' ' }, {'2','|','P','P', 'P', 'P', 'P', 'P', 'P', 'P'}, {'1','|','T','C','A','D','R','A','C','T' },{ ' ',' ','a','b','c','d','e','f','g','h'} };
	
	
	int j;
	int i;

	printf("                  TABLERO DE AJEDREZ \n\n\n");

	for(i=0; i < 9; i++) {
		for (j = 0; j < 10; j++) {
			printf("      %c", tablero[i][j]);
		}
		printf("      \n\n");
	}

	printf(" P=PEON \n T=TORRE \n C=CABALLO \n A=ALFIL \n D=REINA \n R=REY \n\n\n");



	system("pause");
}




