/*Napišite program koji iterativno računa i ispisuje Fibonačijeve brojeve manje
od n.
Fibonačijevi brojevi su definisani na slijedeći način: Prva dva broja su 0 i 1.
Sljedeći broj je zbir prethodna dva broja.
Dakle: fi = fi−1 + fi−2 i f0 = 0 i f1 = 1.
npr. Za n = 10 Izlaz bi trebao izgledati ovako: 0 1 1 2 3 5 8
Sugestija: Četiri varijable (uključujući n) i jedna petlja su dovoljne za
implementaciju. Alternativno, moguća je i implementacija sa tri varijable
(uključujući n), petljom i granama*/
#include <stdio.h>
#define elementi 10

int main() {
  int niz[elementi], s_parnih = 0, b_parnih = 0, s = 0, max, min, i;
  float prosjek, prosjek_p;

  // Unos niza i provjera
  for (i = 0; i < elementi; i++) {
    printf("Unesite %d. cijeli broj: ", i + 1);
    scanf("%d", &niz[i]);
    if (niz[i] % 2 == 0) {
      s_parnih = s_parnih + niz[i];
      b_parnih++;
    }
    s += niz[i];
  }

  prosjek = (float)s / elementi;
  prosjek_p = (float)s_parnih / elementi;
  if (b_parnih == 0) {
    prosjek_p = 0;
  }
  min = niz[0];
  max = niz[0];

  for (i = 0; i < elementi; i++) {
    if (niz[i] > max) {
      max = niz[i];
    }
    if (niz[i] < min) {
      min = niz[i];
    }
  }

  printf("Srednja vrijednost unesenih brojeva je %.2f.\n", prosjek);
  printf("Srednja vrijednost parnih brojeva je %.2f.\n", prosjek_p);
  printf("Najveci element je %d a najmanji %d.\n", max, min);

  return 0;
}
