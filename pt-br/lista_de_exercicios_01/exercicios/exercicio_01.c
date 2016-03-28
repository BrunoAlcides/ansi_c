#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 8

int main() {

	int i, menor, numeros[MAX];

	for (i = 0;i < MAX;i++) {
		printf("Digite um numero: ");
		scanf("%d", &numeros[i]);

		if (i == 0) menor = i;
		else if (numeros[i] < menor) menor = numeros[i];
	};

	printf("O menor numero digitado foi: %d \n", menor);
	system("pause");
}
