/*Koristiti pokazivac kao aritmetiku. Sortirati niz u opadajucem poretku
 * koristeci pokazivac*/

#include <stdio.h>

void sortiranje(int *niz, int n) {
  int *i, *j, temp;

  for (i = niz; i < niz + n - 1; i++) {
    for (j = i + 1; j < niz + n; j++) {
      if (*i < *j) {
        temp = *i;
        *i = *j;
        *j = temp;
      }
    }
  }
}

int main() {
  int i, n;
  int niz[100];
  printf("Unesite broj elemenata niza: ");
  scanf("%d", &n);

  /* Unos niza*/
  for (i = 0; i < n; i++) {
    printf("Unesite %d. realan broj: ", i + 1);
    scanf("%d", niz + i);
  }

  sortiranje(niz, n);

  // Ispis niza
  printf("Sortirani niz:\n");
  for (i = 0; i < n; i++)
    printf("%d ", *(niz + i));
  printf("\n");

  return 0;
}
