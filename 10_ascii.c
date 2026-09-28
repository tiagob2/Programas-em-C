#include <stdio.h>
int main(void) {
      char letra;
      printf("Digite um caractere:  \n");
      letra = getchar();
      printf("Codigo ASCII de %c: %d", letra, letra);
      return 0;
}