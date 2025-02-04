#include <stdio.h>
#define max 50

int main() {
  int matrica[max][max];
  int dimenzija;
  int pivot[max];
  int det = 1, k, i, j;

  // Unos dimenzije matrice
  do {
    printf("Unesite dimenziju kvadratne matrice (max %d): ", max);
    scanf("%d", &dimenzija);
    if (dimenzija < 1 || dimenzija > max) {
      printf("Dimenzija mora biti u opsegu od 1 do %d. Ponovite unos!\n", max);
    }
  } while (dimenzija < 1 || dimenzija > max);

  // Unos matrice
  printf("Unesite elemente matrice (%dx%d):\n", dimenzija, dimenzija);
  for (i = 0; i < dimenzija; i++) {
    for (j = 0; j < dimenzija; j++) {
      printf("Element [%d][%d]: ", i + 1, j + 1);
      scanf("%d", &matrica[i][j]);
    }
  }

  // Gaussova eliminacija
  for (k = 0; k < dimenzija - 1; k++) {
    // Potraga sa pivot elementima na dijagonali
    if (matrica[k][k] == 0) {
      printf("Gaussova eliminacija se ne moze primijeniti jer je jedan/vise "
             "pivot element 0.\n");
      return 0;
    }
    pivot[k] = matrica[k][k];
    det *= matrica[k][k];

    for (i = k + 1; i < dimenzija; i++) {
      float faktor = 1;
      if (matrica[k][k] != 0) {
        faktor = (float)matrica[i][k] / matrica[k][k];
      }
      for (j = k; j < dimenzija; j++) {
        matrica[i][j] -= (int)(faktor * matrica[k][j]);
      }
      matrica[i][k] = 0;
    }
  }

  // Sortiranje pivot elemenata
  for (i = 0; i < dimenzija - 1; i++) {
    for (j = i + 1; i < dimenzija; j++) {
      if (pivot[i] > pivot[j]) {
        int temp = pivot[i];
        pivot[i] = pivot[j];
        pivot[j] = temp;
      }
    }
  }

  // Ispis rezultantne matrice
  printf("Rezultantna gornja trougaona matrica:\n");
  for (i = 0; i < dimenzija; i++) {
    for (j = 0; i < dimenzija; j++) {
      printf("%5d", matrica[i][j]);
    }
    printf("\n");
  }

  // Ispis pivot elemenata
  printf("Pivot elementi su:\n");
  for (i = 0; i < dimenzija; i++) {
    printf("%5d", pivot[i]);
    if (i < dimenzija - 1) {
      printf(", ");
    }
  }
  printf("\n");

  // Ispis determnante
  printf("Vrijednost determinante je: D=%d.\n", det);
  return 0;
}
