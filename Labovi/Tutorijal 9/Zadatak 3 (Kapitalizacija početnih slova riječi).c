/*Napišite funkciju sa prototipom:
char* kapitaliziraj(char *s);
koja u primljenom stringu svako početno slovo riječi koje je malo slova pretvara
u veliko. Pretpostavljamo da su riječi međusobno omeđene razmacima, početkom ili
krajem stringa. Funkcija treba da vraća pokazivač na početak istog stringa koji
je proslijeđen funkciji kao parametar. Ovo omogućuje da se funkcija poziva
lančano, npr. možete pisati: char s[] = "Ovo je primjer."; printf("%s",
kapitaliziraj(s)); Napravite kraći testni program u kojem demonstrirate rad ove
funkcije. Primjer ulaza i izlaza: Unesite neki tekst: Ovo je primjer. Ovo Je
Primjer.
*/

#include <stdio.h>

// Funkcija za provjeravanje malog slova
int malo(char c) { return c >= 'a' && c <= 'z'; }

// Veliko slovo
char veliko(char c) {
  if (malo(c)) {
    return c - ('a' - 'A');
  }
  return c;
}

char *kapitaliziraj(char *s) {
  char *p = s;
  int novaRijec = 1;

  while (*s != '\0') {
    if (*s == ' ') {
      novaRijec = 1;
    } else if (novaRijec && malo(*s)) {
      *s = veliko(*s);
      novaRijec = 0;
    } else {
      novaRijec = 0;
    }
    s++;
  }
  return p;
}

int main() {
  char tekst[100];

  printf("Unesite neki tekst: ");
  fgets(tekst, sizeof(tekst), stdin);

  printf("Kapitalizirani tekst: %s", kapitaliziraj(tekst));
  return 0;
}
