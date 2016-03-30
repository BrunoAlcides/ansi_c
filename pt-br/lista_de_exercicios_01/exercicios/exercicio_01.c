#include <stdlib.h>
#include <stdio.h>

#define MAX 8

int main() {

	int i;
	int menor;
	int posicao;
	int numeros[MAX];

	for (i = 0;i < MAX;i++) {
		printf("Escreva o valor do elemento %d do vetor: ", i);
		scanf("%d", &numeros[i]);

		if (i == 0)
			menor = numeros[i];
		else if (numeros[i] < menor) {
			menor = numeros[i];
			posicao = i;
		}
	};

	printf("O menor numero digitado foi %d e esta na posicao %d do vetor.\n", menor, posicao);
	system("pause");
}
