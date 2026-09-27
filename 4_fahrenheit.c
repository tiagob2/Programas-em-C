#include <stdio.h>
int main(void) {
      float c, f;
      printf("Temperatura em Celsius:  \n");
      scanf("%f", &c);
      f = c * (9/5.0) + 32;
      printf("%.1f°C e igual a: %.1f°F\n", c, f);
      return 0;
}