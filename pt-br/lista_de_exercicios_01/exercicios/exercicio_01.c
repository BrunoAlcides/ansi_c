#include <stdlib.h>
#include <stdio.h>
#include "./exercicio_01.h" // importando funções do arquivo "exercicio_01.h"

#define MAX 8

int main() {

	int i;
	int menor;
	int posicao;
	int numeros[MAX];

	for (i = 0;i < MAX;i++) {
		printf("Escreva o valor do elemento %d do vetor: ", i);
		scanf("%d", &numeros[i]);
	};

	// só podemos usar essa função porque importamos ela na linha 3
	exercicio_01(numeros, &menor, &posicao);

	printf("\nO menor numero do vetor: %d\nposicao: %d\n", menor, posicao);
	system("pause");
}
