#include <stdio.h>
int main (void) {
     int seg;
     printf("Total de segundos:  \n");
     scanf("%d", &seg);
     printf("%dh %dmin %ds\n", (seg / 3600), (seg % 3600) / 60, seg % 60);
     return 0;
     }