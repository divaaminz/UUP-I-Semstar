#include <stdio.h>
#include <sys/cdefs.h>

int main() {

  // Unesite prvu varijablu kao heksadecimalni broj
  int heksBroj; // Heksadecimalni broj je cijeli broj, stoga koristim tip int
  heksBroj = 25;
  printf("Ispis heksadecimalni broj: %d\n", heksBroj);

  // Unesite drugu u eksponencijalnoj notaciji
  float eksponencijalniUnos; // Eksponentima prikazujemo velike, ali i male
                             // brojeve čiju preciznost možemo prikazati
                             // koristeći float, a u slučaju da je potrebna
                             // visoka preciznost double
  eksponencijalniUnos = 24 * 45;
  printf("Ispis eksponencijalnog unosa: %f\n", eksponencijalniUnos);

  // Unesite treću varijablu sa 10 decimala
  double
      decimalniUnos; // U ovom slučaju je korišten tip varijable double kako bi
                     // imali veću tačnost i izbjegli zaokruživanje vrijednosti
                     // na najpribližnije, kao što dobijemo koristeći float

  decimalniUnos = 5.66666666;
  printf("Ispis decimalnog unosa: %f\n", decimalniUnos);

  // Unesite četvrtu varijablu kao cijeli broj sa tri cifre (moguće početne
  // nule)
  // string trocifreniBroj; // U ovom slučaju je bolje
  // koristiti string jer početne cifre mogu biti 0, što ne
  // bismo mogli imati ako koristimo int tip varijable

  // Koju vrijednost i tip očekujete za varijablu sa nazivom zero
  float zero; // Očekivana vrijednost je 0, a tip varijable float jer zaokružuje
              // na decimalu, te će ispis biti konkretniji.
  printf("Ispis zero tipa varijable: %f\n", zero);

  return 0;
}