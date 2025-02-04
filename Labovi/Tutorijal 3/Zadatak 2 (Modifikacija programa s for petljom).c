/*Napraviti program koji sa standardnog ulaza (tastature) učitava koordinate
dvije tačke u trodimenzionalnom prostoru. Tačke t1 i t2 su definirane kao
trojke: t1 = (x1, y1, z1) t2 = (x2, y2, z2) Program na standardni izlaz (ekran)
treba da ispiše udaljenost između ove dvije tačke. Za računanje drugog korijena
možete koristiti funkciju sqrt koja je definisana u biblioteci “math.h”. Primjer
korištenja ove funkcije je: x = sqrt(y); x je korijen od y */
#include <stdio.h>

int main() {
  int x, i, suma = 0;
  for (i = 0; suma <= 100; i++) {
    printf("Unesite broj: ");
    scanf("%d", &x);
    suma += x;
  }

  printf("Suma je: %d", suma);

  return 0;
}