/*Napraviti program koji sa standardnog ulaza učitava godinu i mjesec kao cijele
brojeve, a potom ispisuje naziv tog mjeseca i broj dana u mjesecu. Pretpostaviti
da je prestupna svaka četvrta godina, iako je pravilo za računanje prestupnih
godina nešto složenije. Pri rješavanju zadatka koristiti switch-case programsku
strukturu.
Primjeri ulaza i izlaza:

Unesite mjesec: 2
Unesite godinu: 2004
Februar 2004, broj dana: 29
Unesite mjesec: 5
Unesite godinu: 2015
Maj 2015, broj dana: 31*/
#include <stdio.h>

int main() {
  int mjesec, godina, brojDana = 0;
  char *nazivMjeseca;
  int prestupna = 0;

  printf("Unesite mjesec: ");
  scanf("%d", &mjesec);
  printf("Unesite godinu: ");
  scanf("%d", &godina);

  prestupna = (godina % 4 == 0);

  switch (mjesec) {
  case 1:
    nazivMjeseca = "Januar";
    brojDana = 31;
    break;
  case 2:
    nazivMjeseca = "Februar";
    brojDana = prestupna ? 29 : 28;
    break;
  case 3:
    nazivMjeseca = "Mart";
    brojDana = 31;
    break;
  case 4:
    nazivMjeseca = "April";
    brojDana = 30;
    break;
  case 5:
    nazivMjeseca = "Maj";
    brojDana = 31;
    break;
  case 6:
    nazivMjeseca = "Juni";
    brojDana = 30;
    break;
  case 7:
    nazivMjeseca = "Juli";
    brojDana = 31;
    break;
  case 8:
    nazivMjeseca = "Avgust";
    brojDana = 31;
    break;
  case 9:
    nazivMjeseca = "Septembar";
    brojDana = 30;
    break;
  case 10:
    nazivMjeseca = "Oktobar";
    brojDana = 31;
    break;
  case 11:
    nazivMjeseca = "Novembar";
    brojDana = 30;
    break;
  case 12:
    nazivMjeseca = "Decembar";
    brojDana = 31;
    break;

  default:
    printf("Pogresan unos za mjesec.\n");
    return 1;
  }
  printf("%s %d, broj dana: %d\n", nazivMjeseca, godina, brojDana);

  return 0;
}
