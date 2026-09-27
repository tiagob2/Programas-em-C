#include <stdio.h>
int main (void) {
     float n1, n2, n3;
     printf("Quais são as três notas:  \n");
     scanf("%f  %f  %f", &n1, &n2, &n3);
     printf("Media das notas: %.2f\n", (n1 + n2 + n3) / 3.0);
     return 0;
     }