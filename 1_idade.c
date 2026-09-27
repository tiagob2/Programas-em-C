#include <stdio.h>
int main(void) {
      const int AnoAtual = 2026;
      int AnoN;
      printf("Qual o seu ano de nascimento:  \n");
      scanf("%d", &AnoN);
      printf("Sua idade e: %d\n", AnoAtual - AnoN);
      return 0;
}
