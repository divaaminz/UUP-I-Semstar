/*Zadata je sljedeća igra: Na sredini stola je zdjela sa n novčića. Igrači
naizmjence posežu u zdjelu i izvlače 1, 2 ili 3 novčića. Igrač koji izvuče
posljednji novčić pobjeđuje. Implementirajte igru na sljedeći način: • Kada se
program pokrene, od korisnika se traži broj igrača • 2 do 10 igrača može igrati
• Program bira nasumični broj novčića (između 10 i 30) koji se nalazi u
zdjeli nepoznat igračima
• Igrači se redom pitaju koliko novčića žele da izvuku
• Igrač može izvući između 1,2 ili 3 novčića
• Nakon svake runde, prikazuje se broj preostalih novčića
• Ako je igrač pobijedio, program prikazuje pobjednika i završava
Savjet: Koristite funkciju rand() da generišete slučajni broj.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int brojIgraca, novcic, trenutniIgrac = 0;
  int zauzeto;

  srand(time(NULL));

  do {
    printf("Unesite broj igraca (2-10): ");
    scanf("%d", &brojIgraca);
    if (brojIgraca < 2 || brojIgraca > 10) {
      printf("Broj igraca mora biti izmedju 2 i 10. Pokusajte ponovo.\n");
    }
  } while (brojIgraca < 2 || brojIgraca > 10);

  novcic = rand() % 21 + 10;

  printf("Igra pocinje! Ukupan broj novcica u zdjeli je nepoznat.\n\n");
  while (novcic > 0) {
    printf("Igrac %d, koliko novcica zelite uzeti? (1, 2 ili 3): ",
           trenutniIgrac + 1);
    scanf("%d", &zauzeto);

    // Validacija unosa

    if (zauzeto < 1 || zauzeto > 3) {
      printf("Mozete uzeti samo 1, 2 ili 3 novcica. Pokusajte ponovo.\n");
      continue;
    }

    if (zauzeto > novcic) {
      printf("Ne mozete uzeti vise novcica nego sto je preostalo. Pokusajte "
             "ponovo.\n");
      continue;
    }
    novcic -= zauzeto;
    printf("Preostalo novcica: %d\n", novcic);
    if (novcic == 0) {
      printf("\nIgrac %d je pobijedio!\n", trenutniIgrac + 1);
      break;
    }

    trenutniIgrac = (trenutniIgrac + 1) % brojIgraca;
  }
  return 0;
}