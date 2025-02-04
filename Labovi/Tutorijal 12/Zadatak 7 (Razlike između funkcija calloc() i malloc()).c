/*Navedite sve razlike između funkcija calloc() i malloc() u programskom jeziku
C. Navedite i primjer koji pravi razliku.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int i;
  int *malloc_niz, *calloc_niz;
  int n = 5;

  // Alokacija memorije pomocu malloc()
  malloc_niz = (int *)malloc(n * sizeof(int));
  if (malloc_niz == NULL) {
    printf("Malloc() nije uspio alocirati memoriju.\n");
    return 1;
  }

  // Alokacija memorije pomocu calloc()
  calloc_niz = (int *)calloc(n, sizeof(int));
  if (calloc_niz == NULL) {
    printf("Calloc() nije uspio alocirati memoriju.\n");
    return 1;
  }

  printf("Niz koji je alociran pomocu malloc():\n");
  for (i = 0; i < n; i++) {
    printf("Malloc_niz[%d] = %d\n", i, malloc_niz[i]);
  }

  printf("Niz koji je alociran pomocu calloc():\n");
  for (i = 0; i < n; i++) {
    printf("Calloc_niz[%d] = %d\n", i, calloc_niz[i]);
  }

  free(malloc_niz);
  free(calloc_niz);
  return 0;
}
