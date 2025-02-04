/* Napravite C-program koji ucitava potrošnju elektricne
energije u KWh (velika tarifa(VT) i mala tarifa(MT)) i
pripadajuce cijene po KWh (cijena za malu tarifu i cijena za
veliku tarifu).
Kao izlaz program daje:
 - ukupnu potrošnju u KWh;
 - novcani iznos racuna;
 - udio velike tarife i male tarife u ukupnoj potrošnji.
Na primjer, izlaz iz programa treba biti sljedeceg formata:
Ukupna potrosnja je 234.25 KWh.
Udio velike tarife u ukupnoj potrosnji je 25 %.
Udio male tarife u ukupnoj potrosnji je 75%.
Iznos racuna je 25.45 KM. */
#include <math.h>
#include <stdio.h>

int main() {
  float ukupnaPotrosnja, malaTarifa, velikaTarifa, cijenaVelika, cijenaMala,
      udioMale, udioVelike;
  float racun;
  // Unos velike i male tarife
  printf("Unesi potrosnju po velikoj tarifi: ");
  scanf("%f", &velikaTarifa);
  printf("Unesi potrosnju po maloj tarifi: ");
  scanf("%f", &malaTarifa);
  printf("Unesi cijenu velike tarife: ");
  scanf("%f", &cijenaVelika);
  printf("Unesi cijenu male tarife: ");
  scanf("%f", &cijenaMala);

  // Ukupna potrosnja
  ukupnaPotrosnja = velikaTarifa + malaTarifa;
  printf("\nUkupna potrosnja je %f KWh.\n", ukupnaPotrosnja);

  // Udio velike i male tarife;
  udioVelike = (velikaTarifa / ukupnaPotrosnja) * 100;
  udioMale = (malaTarifa / ukupnaPotrosnja) * 100;
  printf("Udio velike tarife u ukupnoj potrosnji je %f%%.\n", udioVelike);
  printf("Udio male tarife u ukupnoj potrosnji je %f%%.\n", udioMale);

  // Ukupni racun
  racun = malaTarifa * cijenaMala + velikaTarifa * cijenaVelika;

  printf("Iznos racuna je %g KM.", racun);

  return 0;
}