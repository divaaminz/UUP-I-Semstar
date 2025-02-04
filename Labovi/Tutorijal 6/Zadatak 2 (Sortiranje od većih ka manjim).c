#include <stdio.h>
#define DUZINA 10

/*sortiranje kao u prethodnom zadatku od veceg ka manjem*/

int main() {
  double niz[DUZINA], temp;
  int i, j, max; /*promijenjen naziv varijable sa min na max*/

  // Unos niza
  for (i = 0; i < DUZINA; i++) {
    printf("Unesite %d. realan broj: ", i + 1);
    scanf("%lf", &niz[i]);
  }

  for (i = 0; i < DUZINA; i++) {
    max = i;
    for (j = i + 1; i < DUZINA; j++) {
      if (niz[j] > niz[max])   /*lokacija gdje se promjena desila, znak jednakosti izmijenjen*/
        max = j;
      temp = niz[i];
      niz[i] = niz[max];
      niz[max] = temp;
    }
  }

  // Ispis niza
  printf("Sortiran niz:\n");
  for (i = 0; i < DUZINA; i++)
    printf("%g ", niz[i]);
  printf("\n");

  return 0;
}
