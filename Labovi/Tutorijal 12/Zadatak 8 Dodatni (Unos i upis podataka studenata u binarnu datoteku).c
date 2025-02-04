#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct OsnovneInformacije {
  char prezime[20];
  char ime[15];
};

struct Bodovi {
  int broj_bodova;  // bodovi na parcijalnom
  int broj_bodova2; // bodovi na drugom parcijalnom
  int ukupno;       // ukupno bodovi
};

struct Student {
  struct OsnovneInformacije info;
  struct Bodovi bodovi;
};

int unos_bodova() {
  int bodovi;
  while (1) {
    if (scanf("%d", &bodovi) != 1 || bodovi < 0 || bodovi > 20) {
      while (getchar() != '\n')
        ; // ocistiti ulazni bafer
      printf("Unesite broj bodova izmedju 0 i 20.\n");
    } else {
      return bodovi;
    }
  }
}

void upis_binarno(struct Student studenti[], int vel) {
  FILE *izlaz;
  if ((izlaz = fopen("studenti.dat", "wb")) == NULL) {
    printf("Greska pri otvaranju datoteke studenti.dat.\n");
    return;
  }
  fwrite(studenti, sizeof(struct Student), vel, izlaz);
  fclose(izlaz);
  printf("Izlazna datoteka studenti.dat je kreirana.\n");
}
void ispis_polozenih(struct Student studenti[], int vel) {
  FILE *ulaz;
  struct Student s;

  if ((ulaz = fopen("ispit.dat", "rb")) == NULL) {
    printf("Greska pri otvaranju datoteke studenti.dat\n");
    return;
  }

  printf("Studenti koji su polozili (55>): ");
  while (fread(&s, sizeof(struct Student), 1, ulaz)) {
    if (s.bodovi.ukupno >= 55) {
      printf("%-20s %-15s %2d %2d %3d\n", s.info.prezime, s.info.ime,
             s.bodovi.broj_bodova, s.bodovi.broj_bodova2, s.bodovi.ukupno);
    }
  }

  fclose(ulaz);
}

int uporedi(const void *a, const void *b) {
  struct Student *s1 = ((struct Student *)a);
  struct Student *s2 = ((struct Student *)b);
  return strcmp((s1)->info.prezime, (s2)->info.prezime);
}

int main() {
  struct Student studenti[300];
  int vel = 0, opcija, i;

  do {
    printf("1. Unesi Studenta\n");
    printf("2. Ispis studenata koji su polozili\n");
    printf("3. Spremi u datoteku.\n");
    printf("0 Izlaz\n");
    scanf("%d", &opcija);

    if (opcija == 1) {
      printf("Unesite ime: ");
      scanf("%s", studenti[vel].info.ime);
      printf("Unesite prezime: ");
      scanf("%s", studenti[vel].info.prezime);
      printf("Unesite broj bodova na I parcijalnom: ");
      studenti[vel].bodovi.broj_bodova = unos_bodova();

      printf("Unesite broj bodova na II parcijalnom: ");
      studenti[vel].bodovi.broj_bodova2 = unos_bodova();

      studenti[vel].bodovi.ukupno =
          studenti[vel].bodovi.broj_bodova + studenti[vel].bodovi.broj_bodova2;
      vel++;

    } else if (opcija == 2) {
      ispis_polozenih(studenti, vel);
    } else if (opcija == 3) {
      qsort(studenti, vel, sizeof(struct Student), uporedi);
      upis_binarno(studenti, vel);
    }
  } while (opcija != 0);
  return 0;
}