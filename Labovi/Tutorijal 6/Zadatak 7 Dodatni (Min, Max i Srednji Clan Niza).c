// Unijeti niz, ispisati najmanj element, najveci element i ukoliko niz ima
// paran broj elemenata, program treba ispisati srednju vrijednost dva srednja
// elementa
#include <stdio.h>
#define VELICINA 10

// Funkcija za odredjivanje min i max niza
void MinMax(int niz[], int n, int *min, int *max) {
  int i;
  *min = niz[0];
  *max = niz[0];
  for (i = 0; i < n; i++) {
    if (niz[i] < *min) {
      *min = niz[i];
    }
    if (niz[i] > *max) {
      *max = niz[i];
    }
  }
}

// Funkcija za odredjivanje srednjeg clana niza
float SrednjiClan(int niz[], int n) {
  if (n % 2 == 0) {
    return (niz[n / 2 - 1] + niz[n / 2]) / 2.0;
  } else {
    return niz[n / 2];
  }
}

int main() {
  int n, i, j, temp;
  int niz[VELICINA];
  int min, max;
  float srednji;

  printf("Unesite broj elemenata niza: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    // printf("Unesite %d. realan broj: ", i + 1);
    scanf("%d", &niz[i]);
  }

  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < VELICINA; j++) {
      if (niz[i] > niz[j]) {
        temp = niz[i];
        niz[i] = niz[j];
        niz[j] = temp;
      }
    }
  }
  MinMax(niz, n, &min, &max);
  srednji = SrednjiClan(niz, n);
  printf("Najmanji element niza je: %d\n", min);
  printf("Srednji element niza je: %g\n", srednji);
  printf("Najveci element niza je: %d\n", max);

  return 0;
}
