#include <stdio.h>
#define max 50

/*Funckija za unos matrice*/
void unosMatrice(int matrica[max][max], int dimenzija) {
  int i, j;
  printf("Unesite elemente matrice (%dx%d):\n", dimenzija, dimenzija);
  for (i = 0; i < dimenzija; i++) {
    for (j = 0; j < dimenzija; j++) {
      printf("Element [%d][%d]: ", i + 1, j + 1);
      scanf("%d", &matrica[i][j]);
    }
  }
}

/*Funkcija za ispis matrice*/
void ispisMatrice(int matrica[max][max], int dimenzija) {
  int i, j;
  printf("Rezultantna gornja trougaona matrica:\n");
  for (i = 0; i < dimenzija; i++) {
    for (j = 0; i < dimenzija; j++) {
      printf("%5d", matrica[i][j]);
    }
    printf("\n");
  }
}

/*Funkcija pomocu koje vrsimo metod Gausove eliminacije*/
void gaussEliminacija(int matrica[max][max], int dimenzija) {
  int k, i, j;
  for (k = 0; k < dimenzija - 1; k++) {
    // Potraga sa pivot elementima na dijagonali
    if (matrica[k][k] == 0) {
      printf("Gaussova eliminacija se ne moze primijeniti jer je jedan/vise "
             "pivot element 0.\n");
      return;
    }

    for (i = k + 1; i < dimenzija; i++) {
      float faktor;
      if (matrica[k][k] != 0) {
        faktor = (float)matrica[i][k] / matrica[k][k];
      }
      for (j = k; j < dimenzija; j++) {
        matrica[i][j] -= (int)(faktor * matrica[k][j]);
      }
      matrica[i][k] = 0;
    }
  }
}

int main() {
  int matrica[max][max];
  int dimenzija;

  // Dajemo mogucnost korisniku da unese dimenziju
  do {
    printf("Unesite dimenziju kvadratne matrice (max %d): ", max);
    scanf("%d", &dimenzija);
    if (dimenzija < 1 || dimenzija > max) {
      printf("Dimenzija mora biti u opsegu od 1 do %d. Ponovite unos!\n", max);
    }
  } while (dimenzija < 1 || dimenzija > max);

  // Primjena kreiranih funkcija
  unosMatrice(matrica, dimenzija);
  gaussEliminacija(matrica, dimenzija);
  ispisMatrice(matrica, dimenzija);
  return 0;
}