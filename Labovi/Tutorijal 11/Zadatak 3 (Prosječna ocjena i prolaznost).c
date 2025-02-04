/* Zadatak3.
 Datajedatotekaispiti.txtčijiredoviimajusljedećustrukturu:
 brindexa predmet ocjena
 gdjebrindexapredstavljabroj indeksa studentakoji jepolagao ispit, predmet
 jebrojkoji označava predmet iz kojeg je upisana ocjena, aocjena
 jekonačnaocjenakoju je student osvojio.Naprimjer: 12345 3 10 12345 4 9 12233 4
 10 13579 2 8 13579 3 8 Prvi
 redoznačavadajestudentsabrojemindexa12345izpredmetabroj3(npr. tomogubiti Osnove
 računarstva) dobio ocjenu 10 itd. Ako je isti student položio više predmeta,
 jednostavnosedodajejošjedanredsaistimbrojemindexa,alidrugimpredmetom.
 Kreirajteovudatotekuinapunitejenekimtestnimpodacima.Zatimnapraviteprogramkojina
 ulazutražibrojpredmeta, teispisujeprosječnuocjenuiprolaznost
 (procenatstudenatakojisu
 položilitj.dobiliocjenu6iliviše).Primjerulazaiizlazaje:
 Unesite predmet: 4
 Prosječna ocjena: 7.23
 Prolaznost: 60%*/

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