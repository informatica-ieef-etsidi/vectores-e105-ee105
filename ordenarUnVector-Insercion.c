//Sandra Ures
//programa para ordenar un vector de 4 numeros de menor a mayor

#include <stdio.h>

void main() {
	int V[4];
	int i, j, n, temp;
	int Izq, Der, Medio;

	for (i = 0; i < 4; i++) {
		printf("Introduce el numero %d del vector\n", i + 1);
		scanf_s("%d", &V[i]);
	}
	
	for (i = 1; i<4; i++) {
		temp = V[i];
		Izq = 0;
		Der = i - 1;
		while (Izq <= Der) {
			Medio = (Izq + Der) / 2;
			if (temp < V[Medio])
				Der = Medio - 1;
			else
				Izq = Medio + 1;
		}
		for (j = i - 1; j >= Izq; j--) {
			V[j + 1] = V[j];
		}
		V[Izq] = temp;
	}

	printf("EL vector ordenado de menor a mayor es:{");
	for (i = 0; i < 4; i++) {
		printf("%d ", V[i]);
	}
	printf("}\n");

	system("pause");
}



