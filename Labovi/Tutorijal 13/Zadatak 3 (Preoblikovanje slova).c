/*Ispis bloka slova F i C koristeći hash (#), korisnik definise sirinu i visinu
 * sa tastature.*/
#include <stdio.h>

void ispisiF(int visina, int sirina) {
    int i,j;
  for (i = 0; i < visina; i++) {
    if ((i == 0) || (i == visina / 2)) {
      for (j = 0; j < sirina; j++) {
        printf("#");
      }
    } else {
      printf("#");
    }
    printf("\n");
  }
}

void ispisC(int visina, int sirina) {
    int i,j;
  for (i = 0; i < visina; i++) {
    if (i == 0 || i == visina - 1) {
      for (j = 0; j < sirina; j++) {
        printf("#");
      }
    } else {
      printf("#");
      for ( j = 1; j < sirina - 1; j++) {
        printf(" ");
      }
      printf("#");
    }
    printf("\n");
  }
}

int main() {
  int visina, sirina;

  printf("Unesite visinu: ");
  scanf("%d", &visina);
  printf("Unesite sirinu: ");
  scanf("%d", &sirina);

  // Ispis F
  printf("\nSlovo F:\n");
  ispisiF(visina, sirina);

  // Ispis C
  printf("\nSlovo C:\n");
  ispisC(visina, sirina);
  return 0;
}
