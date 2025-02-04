/*Program uzima cjelobrojne vrijednosti od korisnika i ispisuje histogram. -1 za
 * kraj niza, proizvonja duzina niza.*/

#include <stdio.h>

int main() {
  int vrijednost;
  printf("Unesite vrijednost izmedju 0 i 10 (odvojene razmakom, -1 za kraj): ");
  while (1) {
    scanf("%d", &vrijednost);
    if (vrijednost == -1) {
      break; // Zavrsava se unos
    }

    if (vrijednost < 0 || vrijednost > 10) {
      printf("Pogresan unos! Vrijednost mora biti izmedju 0 i 10.\n");
      continue;
    }

    // Ispisuje histogram za trenutnu vrijednost
    int i;
    for (i = 0; i < vrijednost; i++) {
      printf("#");
    }
    printf("\n");
  }

  return 0;
}
