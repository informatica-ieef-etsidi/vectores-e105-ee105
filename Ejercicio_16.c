//DESARROLLADOR: ALFONSO PINTO

//EL EJERCICIO AQUI PRESENTE SE BASA EN EL JUEGO HUNDIR LA FLOTA Y SE HA REALIZADO CON VECTORES Y MATRICES
//EL CODIGO ES MUY SIMPLE Y SE PUEDE REALIZAR DE VARIAS FORMAS. SI ENCONTRAIS UNA FORMA DE MEJORAR ALGO
//NO DUDEIS EN PONERLO YA QUE ESTARIA BIEN SI SE PUDIESE SIMPLIFICAR UN POCO EL CODIGO


#include<stdio.h>
#include<time.h>
#define N 11
void main() {
	char tablero[11][11] = { {'.','.','.','.', '.', '.', '.', '.', '.', '.','0'},{ '.','.','.','.', '.', '.', '.', '.', '.', '.','1' },{ '.','.','.','.', '.', '.', '.', '.', '.', '.','2' },{ '.','.','.','.', '.', '.', '.', '.', '.', '.','3' },{ '.','.','.','.', '.', '.', '.', '.', '.', '.','4' },{ '.','.','.','.', '.', '.', '.', '.', '.', '.','5' },{ '.','.','.','.', '.', '.', '.', '.', '.', '.','6' },{ '.','.','.','.', '.', '.', '.', '.', '.', '.','7' },{ '.','.','.','.', '.', '.', '.', '.', '.', '.','8' },{ '.','.','.','.', '.', '.', '.', '.', '.', '.','9' },{ '0','1','2','3', '4', '5', '6', '7', '8', '9',' ' } };
	char tablero_muestra[11][11] = { { '.','.','.','.', '.', '.', '.', '.', '.', '.','0' },{ '.','.','.','.', '.', '.', '.', '.', '.', '.','1' },{ '.','.','.','.', '.', '.', '.', '.', '.', '.','2' },{ '.','.','.','.', '.', '.', '.', '.', '.', '.','3' },{ '.','.','.','.', '.', '.', '.', '.', '.', '.','4' },{ '.','.','.','.', '.', '.', '.', '.', '.', '.','5' },{ '.','.','.','.', '.', '.', '.', '.', '.', '.','6' },{ '.','.','.','.', '.', '.', '.', '.', '.', '.','7' },{ '.','.','.','.', '.', '.', '.', '.', '.', '.','8' },{ '.','.','.','.', '.', '.', '.', '.', '.', '.','9' },{ '0','1','2','3', '4', '5', '6', '7', '8', '9',' ' } };

	int j;
	int i;

	//VARIABLES ZONA 1 (A)
	int A[2];//cordenadas del barco 1 zona 1
	int a[2];//cordenadas del barco 2 zona 1
	
	//VARIABLES ZONA 2 (B)
	int B[6];//coordenadas del barco 1 zona 2
	int b[6];//coordenadas del barco 2 zona 2
	int p, k, t, l;

	//VARIABLES ZONA 3 (C)
	int C[8];//coordenadas del barco de la zana 3

	//VARIABLES ZONA 4 (D)
	int D[10];//coordenadas del barco de la zona 4
	int n, m;
	
	//VARIABLES ZONA 5 (E)
	int E[4];

	//VARIABLES ZONA 6 (F)
	int F[2];
	int s, d;

	//VARIABLES DEL JUEGO
	int eleccion;
	int x;//coord x
	int g;//cord y
	int f;//bucles
	int w;//misiles
	w = 100;
	int R;//numero de impactos de los misiles
	R = 0;
	int u;//numero de blancos por derribar
	u = 20;
	int U;//numero de barcos por derribar
	U = 8;
	int Q;
	Q = 1;
	
	//VARIABLES PARA LA REVISION DE SI SE HA HUNDIDO EL BARCO
	int barco1, barco2, barco3, barco4, barco5, barco6, barco7, barco8;
	barco1 = barco2 = barco3 = barco4 = barco5 = barco6 = barco7 = barco8 = 0;





	//ZONA 1

	srand(time(NULL)); 
	A[0]= (rand() % 4);
	srand(time(NULL));
	A[1] = (rand() % 3);
	
	srand(time(NULL));
	a[0] = (rand() % 4);
	srand(time(NULL));
	a[1] = (rand() % 3);


	if ((A[0] == a[0]) && (A[1] == a[1])) {
		while ((A[0] == a[0]) && (A[1] == a[1])){  //&& (0<=(Bz1x && bz1x && Bz1y &&bz1y)<=3)
			srand(time(NULL));
			a[0] = (rand() % 4);
			srand(time(NULL));
			a[1] = (rand() % 3);
		}
	}

	//ZONA 2

	B[0] = 5;
	srand(time(NULL));
	B[1] = (rand() % 4);
	B[3] = B[5]=B[1];
	B[2] =4; B[4] = 6;

	srand(time(NULL));
	p = (rand() % 2);
	
		if (p == 0) {
			b[1] = 1;
			t = 6;
			srand(time(NULL));
			l = (rand() % 3)+1;
			b[0] = (t + l);
			b[2] = b[4] = b[0];
			b[3] = 0; b[5] = 2;
		}
		else {
			b[1] = 2;
			t = 6;
			srand(time(NULL));
			l = (rand() % 3) + 1;
			b[0] = (t + l);
			b[2] = b[4] = b[0];
			b[3] = 1; b[5] = 3;

		}

	//ZONA 3

		srand(time(NULL));
		C[0] = (rand() % 4);
		C[2] = C[4] = C[6] = C[0];
		C[1] = 3; C[3] = 4; C[5] = 5; C[7] = 6;

	//ZONA 4
		n = 3;
		srand(time(NULL));
		m = (rand() % 5) + 1;
		D[1] = (m + n);	
		D[3] = D[5] = D[7] = D[9] = D[1];
		D[0] = 5; D[2] = 6; D[4] = 7; D[6] = 8; D[8] = 9;

	//ZONA 5

		srand(time(NULL));
		E[0] = (rand() % 4);
		E[2] = E[0];
		E[1] = 8; E[3] = 9;

	//ZONA 6 
		s = 3;
		srand(time(NULL));
		d = (rand() % 6) + 1;
		F[0] = (d + s);
		F[1] = 9;

	//VARIABLES PARA LAS COORDENADAS EN EL TABLERO
		int z, indice1, indice2;
		indice2 = 1; indice1 = 0;

		int o, indice_1, indice_2;
		indice_2 = 1; indice_1 = 0;

		int h, indicec1, indicec2;
		indicec2 = 1; indicec1 = 0; h = 0;

		int y, indiced1, indiced2;
		indiced2 = 1; indiced1 = 0; y = 0;

		int v, indicee1, indicee2;
		indicee2 = 1; indicee1 = 0, v = 0;


	//COORDENADAS ZONA 1
		tablero[A[1]][A[0]] = '*';
		tablero[a[1]][a[0]] = '*';

	//COORDENADAS ZONA 2
		for (z = 0; z < 3; z++) {
			tablero[B[indice2]][B[indice1]] = '*';
			indice2 = indice2 + 2;
			indice1 = indice1 + 2;
		}
		for (o = 0; o < 3;o++) {
			tablero[b[indice_2]][b[indice_1]]='*';
			indice_2 = indice_2 + 2;
			indice_1 = indice_1 + 2;
		}
	//COORDENADAS ZONA 3
		while(h<=3){
			tablero[C[indicec2]][C[indicec1]] = '*';
			indicec2 = indicec2 + 2;
			indicec1 = indicec1 + 2;
			h++;
		}
	//COORDENADAS ZONA 4
		while (y <= 4) {
			tablero[D[indiced2]][D[indiced1]] = '*';
			indiced2 = indiced2 + 2;
			indiced1 = indiced1 + 2;
			y++;
		}

	//ZONA 5 
		while (v <= 1) {
			tablero[E[indicee2]][E[indicee1]] = '*';
			indicee2 = indicee2 + 2;
			indicee1 = indicee1 + 2;
			v++;
		}

	//ZONA 6
		tablero[F[1]][F[0]] = '*';

	//FINAL DE LA ELECCION ALEATORIA DE COORDENADAS Y DE LA ASIGNACION DE ELLAS EN EL TABLERO
		while (1) {
			printf("BIENVENIDO A HUNDE LA FLOTA \n");
			printf("Pulse 1 para jugar \n");
			printf("Pulse 2 para mas informacion \n");
			scanf_s("%d", &eleccion);

			system("cls");

			switch (eleccion) {
			case 1:
				while (U != 0) {
					for (f = 0; f < 100; f++) {
						for (i = 0; i < N; i++) {
							for (j = 0; j < N; j++) {
								printf("  %c", tablero_muestra[i][j]);
							}
							printf("\n");
						}
						//printf("Numero de BLANCOS por derribar: %d \n", u);
						printf("Numero de BARCOS por derribar: %d \n", U);
						printf("Introduce las coordenadas para el misil(%d misiles restantes): \n", w);
						printf("X: ");
						scanf_s("%d", &x);
						printf("Y: ");
						scanf_s("%d", &g);


							if (tablero[g][x] == '*') {
								printf("IMPACTO \n");
								tablero_muestra[g][x] = 'X';
								++R;//numero de impactos
								printf("LLEVAS %d IMPACTO/S   \n\n\n", R);
							}
							else {
								printf("FALLO \n");
								tablero_muestra[g][x] = 'O';
							}
						w--;//misiles restantes

							if (Q == 1) {
								//voy a trabajar de esta forma para que siempre compruebe si se ha hundido o no, y en caso de ya haberlo hecho que no imprima nada
								if ((tablero_muestra[A[1]][A[0]] == 'X')) {
									if (barco1 == 0) {
										printf("HAS HUNDIDO UN BARCO\n");
										barco1 = 1;
										U--;
									}
								}
								if (tablero_muestra[a[1]][a[0]] == 'X') {
									if (barco2 == 0) {
										printf("HAS HUNDIDO UN BARCO \n");
										barco2 = 1;
										U--;
									}
								}
								if (((tablero_muestra[B[1]][B[0]]) == 'X') && ((tablero_muestra[B[3]][B[2]]) == 'X') && ((tablero_muestra[B[5]][B[4]]) == 'X')) {
									if (barco3 == 0) {
										printf("HAS HUNDIDO UN BARCO\n");
										barco3 = 1;
										U--;
									}
								}
								if (((tablero_muestra[b[1]][b[0]]) == 'X') && ((tablero_muestra[b[3]][b[2]]) == 'X') && ((tablero_muestra[b[5]][b[4]]) == 'X')) {
									if (barco4 == 0) {
										printf("HAS HUNDIDO UN BARCO\n");
										barco4 = 1;
										U--;
									}
								}
								if (((tablero_muestra[C[1]][C[0]]) == 'X') && ((tablero_muestra[C[3]][C[2]]) == 'X') && ((tablero_muestra[C[5]][C[4]]) == 'X') && ((tablero_muestra[C[7]][C[6]]) == 'X')) {
									if (barco5 == 0) {
										printf("HAS HUNDIDO UN BARCO\n");
										barco5 = 1;
										U--;
									}
								}
								if (((tablero_muestra[D[1]][D[0]]) == 'X') && ((tablero_muestra[D[3]][D[2]]) == 'X') && ((tablero_muestra[D[5]][D[4]]) == 'X') && ((tablero_muestra[D[7]][D[6]]) == 'X') && ((tablero_muestra[D[9]][D[8]]) == 'X')) {
									if (barco6 == 0) {
										printf("HAS HUNDIDO UN BARCO\n");
										barco6 = 1;
										U--;
									}
								}
								if (((tablero_muestra[E[1]][E[0]]) == 'X') && ((tablero_muestra[E[3]][E[2]]) == 'X')) {
									if (barco7 == 0) {
										printf("HAS HUNDIDO UN BARCO\n");
										barco7 = 1;
										U--;
									}
								}
								if (tablero_muestra[F[1]][F[0]] == 'X') {
									if (barco8 == 0) {
										printf("HAS HUNDIDO UN BARCO \n");
										barco8 = 1;
										U--;
									}
								}
								if (U == 0) {
									f = 99;
								}
							}
						system("pause");
						system("cls");
					}
						if ((f == 100) && (U != 0)) {
							printf("HAS PERDIDO \n");
							printf("Estas eran las posiciones de todos los blancos: \n");
							for (i = 0; i < N; i++) {
								for (j = 0; j < N; j++) {
									printf(" %c", tablero[i][j]);
								}
								printf("    \n");
							}
							U = 0;
							f = 200;
						}
					f--;
				}
						if ((U == 0) && (f <= 99)) {
							printf("HAS GANADO\n");
						}
						system("pause");
						system("cls");
				break;

			case 2:
				printf("El juego se basa en introducir las coordenadas de donde se piensa que\n");
				printf("estan situados los barcos. El programa muestra los aciertos, los barcos hundidos\n");
				printf("y el numero de misiles restantes antes de perder.\n\n\n");
				system("pause");
				system("cls");
				
				break;

			default: //probablemente si metes una letra muera
				printf("Has introducido un caracter no valido");
				break;
			}

		}

	system("pause");
}