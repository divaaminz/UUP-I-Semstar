/*Korisnik treba da unese tri različita broja s pomičnim zarezom. Implemtirajte
koristeći scanf i prikažite najveći i srednji od ovih brojeva na ekranu.
*/
#include <stdio.h>

int main() {
  float a, b, c, max, sredina;

  printf("Unesite tri razlicita broja s pomicnim zarezom:\n");
  scanf("%f %f %f", &a, &b, &c);

  if (a == b || b == c || a == c) {
    printf("Brojevi moraju biti razliciti. Pokrenite program ponovo.\n");
    return 1;
  }

  // Pronalazak najveceg broja

  if (a > b && a > c) {
    max = a;
    sredina = (b > c) ? b : c;
  } else if (b > a && b > c) {
    max = b;
    sredina = (a > c) ? a : c;
  } else {
    max = c;
    sredina = (a > b) ? a : b;
  }

  printf("Najveci broj: %.2f\n", max);
  printf("Srednji broj: %.2f\n", sredina);
}
