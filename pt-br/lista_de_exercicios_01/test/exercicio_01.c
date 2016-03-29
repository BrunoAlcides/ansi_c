#include <stdio.h>
#include "minunit.h"
#include "exercicio_01.h"

#define MAX 8

int tests_run = 0;
int tests_fail = 0;

int test1() {
  int vetor[MAX] = {1,2,3,4,5,6,7,8};
  mu_assert("max([1,2,3,4,5,6,7,8]) == 8", min(vetor, MAX) == 1);
}

int test2() {
  int vetor[MAX] = {-9,123,-653,123124,123,-67,1,0};
  mu_assert("max([-9,123,-653,123124,123,-67,1,0] == 123124)", min(vetor, MAX) == -653);
}

int test3() {
  int vetor[MAX] = {15,92,13,564,45,436,71,8};
  mu_assert("max([15,92,13,564,45,436,71,8]) == 564", min(vetor, MAX) == 8);
}

int test4() {
  int vetor[MAX] = {-1,-2,-3,-4,-5,-6,-7,-8};
  mu_assert("max([-1,-2,-3,-4,-5,-6,-7,-8]) == -1", min(vetor, MAX) == -8);
}

void all_tests() {
  mu_run_test(test1);
  mu_run_test(test2);
  mu_run_test(test3);
  mu_run_test(test4);
}

int main() {
  all_tests();

  printf("%d/%d testes falharam.\n", tests_fail, tests_run);
}
