#include <stdlib.h>
#include <stdio.h>

#define MAX 5

int main() {

	int i, vetor1[MAX], vetor2[MAX], vetor3[MAX];

	for (i = 0;i < MAX;i++) {
		printf("Digite um numero (vetor1): ");
		scanf("%d", &vetor1[i]);
	}

	for (i = 0;i < MAX;i++) {
		printf("Digite um numero (vetor2): ");
		scanf("%d", &vetor2[i]);

		if (vetor1[i] > vetor2[i])
			vetor3[i] = vetor1[i];
		else
			vetor3[i] = vetor2[i];
	};

	printf("Vetor1: ");

	for (i = 0;i < MAX; i++)
		printf("%d ", vetor1[i]);

	printf("\nVetor2: ");

	for (i = 0;i < MAX; i++)
		printf("%d ", vetor2[i]);

	printf("\nVetor3: ");

	for (i = 0;i < MAX; i++)
		printf("%d ", vetor3[i]);

	printf("\n");

	system("pause");
}
