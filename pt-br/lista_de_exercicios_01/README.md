# Liste de Exercícios 01

## Vetores

### [Exercício 1](exercicios/exercicio_01.c)
 Escreva um programa que leia um vetor de 8 elementos inteiros. Encontre e mostre o menor elemento e sua posição no vetor.

```c
#include <stdlib.h>
#include <stdio.h>

#define MAX 8

int main() {

	int i, menor, numeros[MAX];

	for (i = 0;i < MAX;i++) {
		printf("Digite um numero: ");
		scanf("%d", &numeros[i]);

		if (i == 0)
      menor = i;
		else if (numeros[i] < menor)
      menor = numeros[i];
	};

	printf("O menor numero digitado foi: %d \n", menor);
	system("pause");
}

```

### [Exercício 2](exercicios/exercicio_02.c)
 Escreva um programa que leia um vetor X (dimensão 20) e o escreva. Encontre o maior valor e, a seguir, quantas vezes esse valor aparece em X.

```c

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

	for (i = 0;i < MAX; i++) {
		if (numeros[i] == maior)
			vezes++;

		printf("%d ", numeros[i]);
	}

	printf("\nO maior numero digitado foi %d e foi digitado %d vezes. \n", maior, vezes);

	system("pause");
}

```

### [Exercício 3](exercicios/exercicio_03.c)
Escreva um programa que leia um vetor de 10 posições e mostre-o. Em seguida, troque o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e assim sucessivamente. Mostre o novo vetor depois da troca.

```c

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

```
