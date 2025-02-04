/*Implementirajte program koji ispisuje minimalne i maksimalne vrijednosti
sljedećih tipova podataka char, short i int. Uvjerite se da vaš program radi
neovisno o platformi (tj. koristite unaprijed definirane konstante, a ne
samodefinirane vrijednosti). Napomena: Koristite bibiloteku limits.h.*/
#include <limits.h>
#include <stdio.h>

int main() {
  printf("Minimalna vrijednost za char: %d\n", CHAR_MIN);
  printf("Maskimalna vrijednost za char: %d\n", CHAR_MAX);

  printf("Maskimalna vrijednost za short: %d\n", SHRT_MIN);
  printf("Maskimalna vrijednost za short: %d\n", SHRT_MAX);

  printf("Maskimalna vrijednost za int: %d\n", INT_MIN);
  printf("Maskimalna vrijednost za int: %d\n", INT_MAX);

  return 0;
}
