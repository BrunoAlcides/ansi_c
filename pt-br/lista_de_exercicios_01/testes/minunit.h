#include <stdio.h>

#define mu_assert(message,test) do { \
  if (test) \
    printf("%d - %s - %s\n", (tests_run + 1), message, "PASSOU"); \
  else \
    printf("%d - %s - %s\n", (tests_run + 1), message, "FALHOU"); \
  return test; \
  } while (0)

#define mu_run_test(test) do { \
  int t = test(); \
  tests_fail[tests_run] = !(t); \
  tests_run++; \
} while (0)

extern int tests_run;
extern int tests_fail[4];
