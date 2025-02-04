#include <stdio.h>
#define DUZINA 10

/*Program za sortiranje*/

int main() {
  double niz[DUZINA],
      temp;      /*unosimo niz i temporalnu varijablu, te vrijednost min/max */
  int i, j, min; /*vrijednost min max ovisi o kakvom sortiranju je rijec*/
  /* Unos niza*/
  for (i = 0; i < DUZINA; i++) {
    printf("Unesite %d. realan broj: ", i + 1);
    scanf("%lf", &niz[i]);
  }
  /*For petlja za sortiranje*/
  for (i = 0; i < DUZINA; i++) {
    min = i; // postavljamo vrijednost min na i
    for (j = i + 1; i < DUZINA;
         j++) { /*Provjerava vrijednost svakog narednog clana u nizu*/
      if (niz[j] <
          niz[min]) /*provjerava da li je clan u nizu manji od prethodnog*/
        min = j;    /*ukoliko jeste, varijabli min se dodjeljuje j*/
      /*U nastavku vrsimo dodjelu vrijednosti*/
      temp = niz[i];
      niz[i] = niz[min];
      niz[min] = temp;
    }
  }

  // Ispis niza
  printf("Sortiran niz:\n");
  for (i = 0; i < DUZINA; i++)
    printf("%g ", niz[i]);
  printf("\n");

  return 0;
}
