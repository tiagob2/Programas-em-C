#include <stdio.h>
int main(void) {
      int n1;
      printf("Digite um numero de 3 digitos:  \n");
      scanf("%d", &n1);
      printf("Centena: %d\n", n1 / 100);
      printf("Dezena: %d\n", (n1 /10) % 10);
      printf("unidade: %d\n", n1 % 10);
      return 0;
}