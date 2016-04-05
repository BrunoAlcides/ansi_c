#include <stdlib.h>
#include <stdio.h>

#define MAX 20

int main() {

	int i, maior, vezes, numeros[MAX];

	for (i = 0;i < MAX;i++) {
		printf("Digite um numero: ");
		scanf("%d", &numeros[i]);

		if (i == 0)
			maior = i;
		else if (numeros[i] > maior)
			maior = numeros[i];
	};

	printf("Vetor: ");

	for (i = 0; i < MAX; i++) {
		if (numeros[i] == maior)
			vezes++;

		printf("%d ", numeros[i]);
	}

	printf("\nO maior numero digitado foi %d e foi digitado %d vezes. \n", maior, vezes);

	system("pause");
}
