/* Modifikujte prethodni program- dodajte mogućnost da se unese broj indexa
 studenta, nakon čega program ispisuje ukupan broj predmeta koje je student
 odslušao, broj položenih, te prosječnu ocjenu. Primjer: Unesite 1 za statistiku
 studenta, 2 za statistiku predmeta, 0 za izlaz:
 1
 Unesite broj indexa: 12345
 Student je slusao 4 predmeta, a polozio 3 (75%).
 Prosjecna ocjena polozenih predmeta je 8.2.
 Unesite 1 za statistiku studenta, 2 za statistiku
 predmeta, 0 za izlaz:
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int brojIndexa;
  int predmet;
  int ocjena;
} Ispit;

int main() {
  FILE *ulaz;
  Ispit ispit;
  int predmet, brojStudenata = 0, brojPolozenih = 0;
  double sumaOcjena = 0.0;

  printf("Unesite predmet: ");
  scanf("%d", &predmet);

  ulaz = fopen("ispiti.txt", "r");
  if (ulaz == NULL) {
    printf("Pogreska kod otvaranja datoteke!\n\n");
    return 1;
  }
  while (fscanf(ulaz, "%d %d %d", &ispit.brojIndexa, &ispit.predmet,
                &ispit.ocjena) != EOF) {
    if (ispit.predmet == predmet) {
      sumaOcjena += ispit.ocjena;
      brojStudenata++;
      if (ispit.ocjena >= 6) {
        brojPolozenih++;
      }
    }
  }

  if (brojStudenata == 0) {
    printf("Nema podataka za predmet %d.\n", predmet);
  } else {
    double prosjecnaOcjena = sumaOcjena / brojStudenata;
    double prolaznost = (double)brojPolozenih / brojStudenata * 100;
    printf("Prosjecna ocjena: %.2f\n", prosjecnaOcjena);
    printf("Prolaznost: %.0f%%\n", prolaznost);
    fclose(ulaz);
  }
  return 0;
}