/*Program za učitavanje iznosa novca u novčaniku (cjelobrojna vrijednost) i
 * razbijanje na apoene*/
#include <stdio.h>

int main() {
  int iznos, preostaliIznos;
  printf("Unesite iznos novca u novcaniku: ");
  scanf("%d", &iznos);

  preostaliIznos = iznos;

  printf("Razbijanje iznosa na apoene:\n");
  int novcanice[] = {200, 100, 50, 20, 10, 5, 2, 1};
  int brojNovca;

  int i;
  for (i = 0; i < 8; i++) {
    brojNovca = preostaliIznos / novcanice[i];
    preostaliIznos %= novcanice[i];

    if (brojNovca > 0) {
      printf("%d x %d KM\n", brojNovca, novcanice[i]);
    }
  }
  return 0;
}
