/*Dopuniteprethodnizadataktakodaispisuje:
 ● brojsamoglasnika
 ● brojvelikihslova
 ● brojcifara*/

#include <stdio.h>
#include <stdlib.h> //Funkcija exit

int main() {
  FILE *ulaz;
  char znak, ime[20];
  int broj_redova = 0, broj_rijeci = 0, broj_znakova = 0, razmak = 1;
  int broj_samoglasnika = 0, broj_velikihSlova = 0, broj_cifara = 0;
  printf("Unesite ime datoteke: ");
  scanf("%s", ime);
  ulaz = fopen(ime, "r");
  if (ulaz == NULL) {
    printf("Pogreska kod otvaranja datoteke %s!\n\n", ime);
    return 1;
  }

  while ((znak = fgetc(ulaz)) != EOF) {
    // Ako je znak novi red, pocećaj broj linija ya jedan
    if (znak == '\n')
      ++broj_redova;

    // Da li je znak razmak
    if (znak == ' ' || znak == '\n' || znak == 't')
      razmak = 1;

    else {
      ++broj_znakova;
      // Ako je prethodni znak bio razmak
      if (razmak == 1)
        ++broj_rijeci;
      razmak = 0;

      // Provjera za samoglasnike
      if (znak == 'a' || znak == 'A' || znak == 'e' || znak == 'E' ||
          znak == 'u' || znak == 'U' || znak == 'o' || znak == 'o') {
        ++broj_samoglasnika;
      }

      // Provjera za veliko slovo
      if (znak >= 'A' && znak <= 'Z') {
        ++broj_velikihSlova;
      }

      if (znak >= '0' && znak <= '9') {
        ++broj_cifara;
      }
    }
  }
  if (broj_znakova != 0)
    broj_redova++;
  printf("Broj redova: %d\nBroj rijeci: %d\nBroj znakova: %d\nBroj "
         "samoglasnika: %d\nBroj velikih slova: %d\nBroj cifara: %d\n",
         broj_redova, broj_rijeci, broj_znakova, broj_samoglasnika,
         broj_velikihSlova, broj_cifara);
  fclose(ulaz);
  return 0;
}