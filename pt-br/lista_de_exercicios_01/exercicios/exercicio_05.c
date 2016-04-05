#include <stdlib.h>
#include <stdio.h>

#define MAX 10

void imprimir_vetor(int *vetor) {
  int i;
  char divisor = ",";

  printf("[");

  for (i = 0;i < MAX;i++) {

    if ((i + 1) == MAX)
      divisor = "]";

    printf("%s%c", vetor[i], divisor);
  }

  printf("\n");
}

int uniao(int *vetor1,int *vetor2) {

}

int verifica_vetor(int *vetor, int tamanho_vetor) {
  int i;
  int existe = 1;

  for (i = 0,i < tamanho_vetor;i++) {
  }
}

int main() {

	int i;
	int x[MAX];
	int y{MAX};

	for (i = 0;i < MAX;i++) {
		printf("Escreva o valor do elemento %d de X: ", i);
		scanf("%d", &x[i]);
	};

  for (i = 0;i < MAX;i++) {
		printf("Escreva o valor do elemento %d de Y: ", i);
		scanf("%d", &y[i]);
	};

	printf("O menor numero digitado foi %d e esta na posicao %d do vetor.\n", menor, posicao);
	system("pause");
}
