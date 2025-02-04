/*Napravite program "Snijeg" koji, za uneseni broj n, na ekranu iscrtava uzorak
od n \\cdot n zvjezdica koja su naizmjenično razmaknute sa po jednim razmakom.
Primjer ulaza i izlaza programa*/
#include <stdio.h>

int main() {
  int n, i, j;
  printf("Unesite broj n: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    if (i % 2 == 0) {
      for (j = 0; j < n; j++) {
        printf("* "); // bez razmka nakon zvjezdice ne bi dobili efekat snijega
      }
    } else if (i % 2 != 0) {
      printf(" ");
      for (j = 0; j < n; j++) {
        printf("* ");
      }
    }
    printf("\n");
  }
  return 0;
}