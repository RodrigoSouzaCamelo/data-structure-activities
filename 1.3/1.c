#include <stdio.h>

#define TAMANHO 5

void imprime_array_elemento(int*, int);

int main() {
	int array[TAMANHO];

	int i;
	for(i = 0; i < TAMANHO; i++) {
		array[i] = i + 1;
	}

	imprime_array_elemento(&array[0], 1);
	// &array[0] o zero é a posição onde o array de inteiros começa
	// &array[1] vai da posição 2 do array até fora do range do 
	// array

	return 0;
}

void imprime_array_elemento(int *aArray, int iElemento) {
	//printf("Elemento: %i", aArray[iElemento]);
	int i;
	for(i = 0; i < TAMANHO; i++) {
		printf("%i\n", aArray[i]);
	}
}
