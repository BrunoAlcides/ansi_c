#include <stdlib.h>
#include <stdio.h>

#define MAX 10

int main() {

	int i, numeros[MAX], inverso[MAX];

	for (i = 0;i < MAX;i++) {
		printf("Digite um numero: ");
		scanf("%d", &numeros[i]);

		inverso[(MAX - 1) - i] = numeros[i];
	};

	printf("Vetor: ");

	for (i = 0;i < MAX; i++)
		printf("%d ", numeros[i]);

	printf("\nNovo Vetor: ");

	for (i = 0;i < MAX; i++)
		printf("%d ", inverso[i]);

	printf("\n");

	system("pause");
}
