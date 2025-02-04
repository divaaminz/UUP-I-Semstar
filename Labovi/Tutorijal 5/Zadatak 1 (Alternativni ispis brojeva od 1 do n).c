/*Unesite mjesec: 2
Unesite godinu: 2004
Februar 2004, broj dana: 29
Unesite mjesec: 5
Unesite godinu: 2015
Maj 2015, broj dana: 31*/
#include <stdio.h>
#define elementi 10

int main() {
  int niz[elementi], suma, i;
  float prosjek;

  // UNos niza
  for (i = 0; i < elementi; i++) {
    printf("Unesite %d. cijeli broj: ", i + 1);
    scanf("%d", &niz[i]);
  }

  // Racunanje prosjeka
  suma = 0;
  for (i = 0; i < elementi; i++) {
    suma = suma + niz[i];
  }
  prosjek = (float)suma / elementi;

  printf("Srednja vrijednost unesenih brojeva je %.2f.\n", prosjek);
  return 0;
}
