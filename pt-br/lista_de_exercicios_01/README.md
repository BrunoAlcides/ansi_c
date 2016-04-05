# Liste de Exercícios 01

- [Vetores](#vetores)
  - [Exercício 1](#exercício_1)
  - [Exercício 2](#exercício_2)
  - [Exercício 3](#exercício_3)
  - [Exercício 4](#exercício_4)
  - [Exercício 5](#exercício_5)
- [Strings](#strings)
  - [Exercício 6](#exercício_6)
  - [Exercício 7](#exercício_7)
  - [Exercício 8](#exercício_8)
  - [Exercício 9](#exercício_9)
- [Funções](#funções)
  - [Exercício 10](#exercício_10)
  - [Exercício 11](#exercício_11)
  - [Exercício 12](#exercício_12)


## Vetores

### [Exercício 1](exercicios/exercicio_01.c)
 Escreva um programa que leia um vetor de 8 elementos inteiros. Encontre e mostre o menor elemento e sua posição no vetor.

```c
#include <stdlib.h>
#include <stdio.h>
#include "exercicio_01.h"

#define MAX 8

/* exercicio_01.h */
void exercicio_01(int *vetor, int *menor, int *posicao) {
	int i;
	*posicao = 0;

	for (i = 0;i < 8;i++) {
		if (i == 0)
			*menor = vetor[i];
		else if (vetor[i] < *menor) {
			*posicao = i;
			*menor = vetor[i];
		}
	}
}

int main() {

	int i;
	int menor;
	int posicao;
	int numeros[MAX];

	for (i = 0;i < MAX;i++) {
		printf("Escreva o valor do elemento %d do vetor: ", i);
		scanf("%d", &numeros[i]);
	};

	exercicio_01(numeros, &menor, &posicao);

	printf("O menor numero do vetor: %d\nposicao: %d\n", menor, posicao);
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

### [Exercício 4](exercicios/exercicio_04.c)
Escrever um programa que leia 2 vetores com 5 elementos inteiros e gere um terceiro vetor contendo os valores máximos entre os 2 vetores lidos, considerando seus elementos dois a dois.

#### Exemplo:

| Vetor1        | Vetor2         | Vetor3          |
|:-------------:|:--------------:|:---------------:|
| [2,9,8,12,55] | [45,1,22,15,5] | [45,9,22,15,55] |

```c

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

```

### [Exercício 5](exercicios/exercicio_05.c)
Escrever um programa que lê 2 vetores X(10) e Y(10) e os escreve. Crie e apresente um vetor Z que seja:
- a união de X e Y;
- intersecção entre X e Y;

``` c
```

## Strings

### [Exercício 6](exercicios/exercicio_06.c)
Elabore um programa que se utilize de 2 variáveis para guardar 2 nomes de pessoas (lidas do teclado). O programa deve apresentar o nome se forem idênticos, e caso não sejam apresentar:
- O nome que tem maior número de letras;
- O nome que deve aparecer primeiro me uma lista em ordem crescente;

``` c
```

### [Exercício 7](exercicios/exercicio_07.c)
Escrever um programa que leia palavra por palavra de uma frase, unindo cada palavra lida em uma única variável string (máximo 200 caracteres). A frase deve ser composta por 10 palavras.

``` c
```

### [Exercício 8](exercicios/exercicio_08.c)
Uma concessionária está fazendo uma promoção de seus 5 modelos e deseja analisar o faturamento por modelo ao final de cada dia. Para tanto, escreva um programa que armazene em um vetor o preço de cada modelo e em outro o nome do modelo no fechamento do dia (armazenando em um 3º vetor) e apresentar o modelo com maior faturamento e o modelo com maior número de unidades vendidas.

``` c
```

### [Exercício 9](exercicios/exercicio_09.c)
Modifique o programa anterior para que esse possua um menu, que após o cadastramento dos modelos e seus repectivos preços, fique sempre disponível para que o programa:
- possa vender 1 unidade (de um modelo  escolhido pelo usúario) e registrar a venda no vetor de quantidades vendidas de cada modelo;
- encerrar o dia (finalizar vendas), apresentando em o seguida o faturamento da venda de cada modelo.

``` c
```

## Funções

### [Exercício 10](exercicios/exercicio_10.c)
Escrever um programa que leia a quantidade de horas e minutos e use uma função para calcular e retornar pelo nome da função (usando o comando return) a quantidade de minutos equivalente. Por exemplo, se entrar na função 3h e 15m a função deve retornar 195 minutos.

``` c
```

### [Exercício 11](exercicios/exercicio_11.c)
Elabore uma função que receba como parâmetro um valor que representa a quantidade de minutos e retorne a quantidade de horas e minutos.Exemplo, se recebe o valor 125 retorne 2 horas e 5 minutos.

``` c
```

### [Exercício 12](exercicios/exercicio_12.c)
Elabore um programa que leia a hora de entrada e a hora de saída de 1 trabalhador e utilize as funções elaboradas nos exercícios 3 e 4 para apresentar quantas horas ele trabalhou.

``` c
```
