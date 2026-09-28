#include <stdio.h>
int main(void) {
      int num;
      printf("Digite um inteiro:  \n");
      scanf("%d", &num);
      printf("Par e positivo: %d\n", num % 2 == 0 && num > 0 );
      return 0;
}