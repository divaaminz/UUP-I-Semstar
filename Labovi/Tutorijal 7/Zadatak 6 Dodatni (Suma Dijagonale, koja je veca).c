/*Korisnik unosi velicinu matrica, elemente a zatim izracunava sumu elemenata
 * iznad i ispod glavne dijagonale. i ispisuje koja suma je veca, on iznad il
 * ispod dijagonale*/
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
void ispisMatrice(int sumaIznad, int sumaIspod) {
  printf("Suma elemenata iznad glavne dijagonale: %d\n", sumaIznad);
  printf("Suma elemenata ispod glavne dijagonale: %d\n", sumaIspod);
  if (sumaIznad > sumaIspod) {
    printf("Suma iznad glavne dijagonale je veća.\n");
  } else if (sumaIznad == sumaIspod) {
    printf("Suma su jednake.\n");
  } else {
    printf("Suma ispod glavne dijagonale je veća.\n");
  }
}

void suma(int matrica[max][max], int n, int *sumaIspod, int *sumaIznad) {
  *sumaIspod = 0;
  *sumaIznad = 0;

  int i, j;

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (i < j) {
        *sumaIznad += matrica[i][j];
      } else if (i > j) {
        *sumaIspod += matrica[i][j];
      }
    }
  }
}

int main() {
  int matrica[max][max];
  int dimenzija;
  int sumaIznad, sumaIspod;

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
  suma(matrica, dimenzija, &sumaIspod, &sumaIznad);
  ispisMatrice(sumaIznad, sumaIspod);

  return 0;
}