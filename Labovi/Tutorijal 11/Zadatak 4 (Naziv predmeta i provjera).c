#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAZIV 100

typedef struct {
  int brojIndexa;
  int predmet;
  int ocjena;
} Ispit;

typedef struct {
  int broj_predmeta;
  char naziv[MAX_NAZIV];
} Predmet;

int pronadji_predmet(char naziv_predmeta[], Predmet predmet[], int broj_predmeta) {
  for (int i = 0; i < broj_predmeta; i++) {
    if (strcmp(predmet[i].naziv, naziv_predmeta) == 0) {
      return predmet[i].broj_predmeta;
    }
  }
  return -1;
}

int main() {
  FILE *ulaz;
  Ispit ispit;
  Predmet predmeti[100];  // Array of Predmet structures
  int brojPredmeta = 5;  // Example: Total 5 subjects in the predmeti array
  int predmetId, brojStudenata = 0, brojPolozenih = 0;
  double sumaOcjena = 0.0;
  char nazivPredmeta[MAX_NAZIV];

  // Populate some example subjects into predmeti array
  strcpy(predmeti[0].naziv, "Inzenjerska matematika I");
  predmeti[0].broj_predmeta = 1;
  strcpy(predmeti[1].naziv, "Inzenjerska fizika I");
  predmeti[1].broj_predmeta = 2;
  strcpy(predmeti[2].naziv, "Linearna algebra i geometrija");
  predmeti[2].broj_predmeta = 3;
  strcpy(predmeti[3].naziv, "Osnove racunarstva");
  predmeti[3].broj_predmeta = 4;
  strcpy(predmeti[4].naziv, "Osnove elektrotehnike");
  predmeti[4].broj_predmeta = 5;

  printf("Unesite predmet: ");
  fgets(nazivPredmeta, MAX_NAZIV, stdin); // Use fgets to handle spaces in the name
  nazivPredmeta[strcspn(nazivPredmeta, "\n")] = 0; // Remove trailing newline

  predmetId = pronadji_predmet(nazivPredmeta, predmeti, brojPredmeta);

  if (predmetId == -1) {
    printf("Nepostojeci predmet!\n");
  } else {
    ulaz = fopen("ispiti.txt", "r");
    if (ulaz == NULL) {
      printf("Pogreska kod otvaranja datoteke ispiti.txt!\n");
      return 1;
    }

    while (fscanf(ulaz, "%d %d %d", &ispit.brojIndexa, &ispit.predmet, &ispit.ocjena) != EOF) {
      if (ispit.predmet == predmetId) {
        sumaOcjena += ispit.ocjena;
        brojStudenata++;
        if (ispit.ocjena >= 6) {
          brojPolozenih++;
        }
      }
    }

    if (brojStudenata == 0) {
      printf("Nema podataka za predmet %s.\n", nazivPredmeta);
    } else {
      double prosjecnaOcjena = sumaOcjena / brojStudenata;
      double prolaznost = (double)brojPolozenih / brojStudenata * 100;
      printf("Prosjecna ocjena: %.2f\n", prosjecnaOcjena);
      printf("Prolaznost: %.0f%%\n", prolaznost);
    }

    fclose(ulaz);
  }

  return 0;
}
