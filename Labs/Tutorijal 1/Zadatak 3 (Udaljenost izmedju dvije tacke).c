/*Napraviti program koji sa standardnog ulaza (tastature) učitava koordinate
dvije tačke u trodimenzionalnom prostoru. Tačke t1 i t2 su definirane kao
trojke: t1 = (x1, y1, z1) t2 = (x2, y2, z2) Program na standardni izlaz (ekran)
treba da ispiše udaljenost između ove dvije tačke. Za računanje drugog korijena
možete koristiti funkciju sqrt koja je definisana u biblioteci “math.h”. Primjer
korištenja ove funkcije je: x = sqrt(y);
x je korijen od y */
#include <math.h>
#include <stdio.h>

int main() {
  int x1, x2, y1, y2, z1, z2;
  double d;

  printf("Unesite koordinate tacke t1: ");
  scanf("%d,%d,%d", &x1, &y1, &z1);
  printf("Unesite koordinate tacke t2: ");
  scanf("%d,%d,%d", &x2, &y2, &z2);

  d = sqrt((x2 - x1) * (x2 + x1) + (y2 - y1) * (y2 + y1) +
           (z2 - z1) * (z2 + z1));
  printf("Udaljenost izmedju tacke t1 i tacke t2 je: %f", d);

  return 0;
}
