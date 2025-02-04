#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  FILE *ulaz;
  char ime[50], prezime[50];
  int plata, unosPlate;

  ulaz = fopen("zaposleni.txt", "r");
  if (ulaz == NULL) {
    printf("Pogreska kod otvaranja datoteke!\n\n");
    return 1;
  }

  printf("Unesite minimalnu platu: ");
  scanf("%d", &unosPlate);
  char unos[100];
  fgets(unos, 100, ulaz);

  while (fscanf(ulaz, "%s %s %d", ime, prezime, &plata) == 3) {
    if (plata > unosPlate) {
      printf("%s %s %d\n", ime, prezime, plata);
    }
  }
  fclose(ulaz);
  return 0;
}
