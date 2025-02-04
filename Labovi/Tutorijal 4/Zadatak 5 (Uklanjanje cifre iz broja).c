/*Napišite program koji sa tastature učitava neki pozitivan cijeli broj i jednu
cifru, a zatim iz broja izbacuje sva pojavljivanja unesene cifre. Također treba
ispisati broj pomnožen sa 2. Petljom do-while spriječite da se unose negativni
brojevi. Primjer ulaza i izlaza: Unesite broj: 495257 Unesite cifru: 5 Nakon
izbacivanja broj glasi 4927. Broj pomnozen sa dva glasi 9854*/
#include <stdio.h>

int main() {
  int broj, cifra, noviBroj = 0, temp = 1;
  int brojZaIspis, rezulat, posljednjaCifra;

  do {
    printf("Unesite broj: ");
    scanf("%d", &broj);
  } while (broj < 0);

  printf("Unesite cifru: ");
  scanf("%d", &cifra);

  brojZaIspis = broj;

  while (broj > 0) {
    posljednjaCifra = broj % 10;
    if (posljednjaCifra != cifra) {
      noviBroj += posljednjaCifra * temp;
      temp *= 10;
    }
    broj /= 10;
  }

  // Ispis rezultata
  printf("Nakon izbacivanja broj glasi %d.\n", noviBroj);

  // Mnozenje
  rezulat = noviBroj * 2;
  printf("Broj pomnozen sa dva glasi %d.\n", rezulat);

  return 0;
}
