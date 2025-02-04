/*Napišite funkciju sa prototipom:
int prva_rijec(char *s);
koja string zamjenjuje prvom riječi u stringu. Npr. ako je dat string:
"Danas je lijep dan."
funkcija ga treba pretvoriti u:
"Danas"
Funkcija vraća broj riječi u polaznom stringu (prije odsijecanja ostalih
riječi). Radi jednostavnosti zadatka, pretpostavite da je riječ bilo koji niz
znakova razdvojen znakom razmak. Za vježbu možete napraviti složenija pravila za
riječi uzimajući u obzir znakove interpunkcije.*/

#include <stdio.h>

int prva_rijec(char *s) {
  int broj_rijeci = 0;
  char *p = s;
  char *kraj_prve = NULL;

  // Brojanje i trazenje kraja rijeci
  while (*p) {
    if (*p == ' ') {
      if (p > s && *(p - 1) != ' ') {
        broj_rijeci++;
        if (!kraj_prve)
          kraj_prve = p;
      }
    } else if (*(p + 1) == '\0')
      broj_rijeci++;
    if (!kraj_prve) {
      kraj_prve = p + 1;
    }
    p++;
  }
  if (kraj_prve) {
    *kraj_prve = '\0';
  }
  return broj_rijeci;
}

int main() {
  char tekst[100];

  printf("Unesite neki tekst: ");
  fgets(tekst, sizeof(tekst), stdin);

  int broj_rijeci = prva_rijec(tekst);

  printf("Prva riječ: %s\n", tekst);
  printf("Ukupan broj riječi: %d\n", broj_rijeci);
  return 0;
}