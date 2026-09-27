#include <stdio.h>
int main (void) {
     #define PI 3.14159;
     float raio;
     printf("Qual o raio:  \n");
     scanf("%f", &raio);
     printf("Area do circulo: %.2f\n", PI * (raio * raio));
     return 0;
     }