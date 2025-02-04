/*Napišite funkciju max_slovo koja prima string a vraća (veliko) slovo koje se
najviše puta pojavljuje u stringu. Funkcija ne treba razlikovati velika i mala
slova. Ukoliko se više slova ponavlja isti broj puta, treba vratiti najmanje
takvo slovo. Znakovi koji nisu slova nas ne zanimaju. Primjer: Ako string glasi:
"Ovo je probni primjer."
Funkcija treba vratiti slovo O jer se ono pojavljuje tri puta u stringu a manje
je od slova R koje se također pojavljuje tri puta.
*/

#include <stdio.h>

char max_slovo(const char *s) {
  int brojac[26] = {0};
  char maxslovo = '\0';
  int maxbroj = 0;

  for (; *s; s++) {
    if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z')) {
      char veliko = (*s >= 'a') ? *s - 'a' + 'A' : *s;

      brojac[veliko - 'A']++;
    }
  }

  // Pronalazenje slova sa najvecim brojem ponavaljanja
  int i = 0;
  for (; i < 26; i++) {
    if (brojac[i] > maxbroj || (brojac[i] == maxbroj && i + 'A' < maxslovo)) {
      maxbroj = brojac[i];
      maxslovo = i + 'A';
    }
  }
  return maxslovo;
}

int main() {
  char tekst[100];

  printf("Unesite neki tekst: ");
  fgets(tekst, sizeof(tekst), stdin);

  char rezultat = max_slovo(tekst);

  if (rezultat) {
    printf("Najčešće slovo je: %c\n", rezultat);
  } else {
    printf("Nema slova u tekstu.\n");
  }
  return 0;
}