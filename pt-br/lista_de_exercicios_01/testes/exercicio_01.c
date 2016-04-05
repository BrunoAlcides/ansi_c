#include <stdio.h>
#include "minunit.h"
#include "../exercicios/exercicio_01.h"

#define MAX 8
#define NUM_TESTES 4

int tests_run = 0;
int tests_fail[NUM_TESTES];

int teste1() {
  int vetor[MAX] = {1,2,3,4,5,6,7,8};
  int posicao;
  int menor;

  exercicio_01(vetor, &menor, &posicao);

  mu_assert("\tvetor: [1,2,3,4,5,6,7,8]\n\tmenor elemento: 1\n\tposicao: 0", posicao == 0 && menor == 1);
}

int teste2() {
  int vetor[MAX] = {-1,-2,-3,-4,-5,-6,-7,-8};
  int posicao;
  int menor;

  exercicio_01(vetor, &menor, &posicao);

  mu_assert("\tvetor: [-1,-2,-3,-4,-5,-6,-7,-8]\n\tmenor elemento: -8\n\tposicao: 7", posicao == 7 && menor == -8);
}

int teste3() {
  int vetor[MAX] = {45,53,181,5848,99,-7,-4658,-4123};
  int posicao;
  int menor;

  exercicio_01(vetor, &menor, &posicao);

  mu_assert("\tvetor: [45,53,181,5848,99,-7,-4658,-4123]\n\tmenor elemento: -4658\n\tposicao: 6", posicao == 6 && menor == -4658);
}

int teste4() {
  int vetor[MAX] = {0,-80,150,70,-560,40,4400,620};
  int posicao;
  int menor;

  exercicio_01(vetor, &menor, &posicao);

  mu_assert("\tvetor: [1,2,3,4,5,6,7,8]\n\tmenor elemento: -560\n\tposicao: 4", posicao == 4 && menor == -560);
}

void all_tests() {
  mu_run_test(teste1);
  mu_run_test(teste2);
  mu_run_test(teste3);
  mu_run_test(teste4);
}

int main() {
  int i;
  int todos_passaram = 1;

  all_tests();

  printf("\n");

  for (i = 0;i < NUM_TESTES;i++) {
    if (tests_fail[i]) {
      printf("Teste %d - FALHOU\n", (i + 1));
      todos_passaram = 0;
    }
  }

  if (todos_passaram)
    printf("Todos os testes PASSARAM");

  printf("\nTotal de teste: %d\n", tests_run);
}
