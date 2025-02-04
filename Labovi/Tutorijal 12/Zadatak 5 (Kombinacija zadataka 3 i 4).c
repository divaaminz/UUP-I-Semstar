
/*Objedinite programe napravljene u zadacima 3 i 4. Sada meni za izbor iz
zadatka 3 treba sadržavati i opciju "3 za usmeni" koja kreira datoteku
usmeni.dat. Unesite 1 za unos, 2 za ispis, 3 za usmeni, 0 za izlaz: 3 Izlazna
datoteka usmeni.dat je kreirana. Unesite 1 za unos, 2 za ispis, 3 za usmeni, 0
za izlaz: 0 Pored toga i datoteka sa rezultatima ispita treba biti binarna
datoteka ispiti.dat.*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
  char prezime[20];
  char ime[15];
  int broj_bodova;  // bodovi na parcijalnom
  int broj_bodova2; // bodovi na drugom parcijalnom
  int ukupno;       // ukupno bodovi
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

void upis_usmeni(struct Student studenti[], int vel) {
  FILE *izlaz_usmeni;
  if ((izlaz_usmeni = fopen("usmeni.dat", "wb")) == NULL) {
    printf("Greska pri otvaranju datoteke usmeni.dat.\n");
    return;
  }
  for (int i = 0; i < vel; i++) {
    if (studenti[i].broj_bodova >= 10 && studenti[i].broj_bodova2 >= 10) {
      fwrite(&studenti[i], sizeof(struct Student), 1, izlaz_usmeni);
    }
  }
  fclose(izlaz_usmeni);
  printf("Izlazna datoteka usmeni.dat je kreirana.\n");
}
void upis_ispit(struct Student studenti[], int vel) {
  FILE *izlaz_ispit;
  if ((izlaz_ispit = fopen("ispit.dat", "wb")) == NULL) {
    printf("Greska pri otvaranju datoteke ispit.dat\n");
    return;
  }
  for (int i = 0; i < vel; i++) {
    fwrite(&studenti[i], sizeof(struct Student), 1, izlaz_ispit);
  }
  fclose(izlaz_ispit);
  printf("Izlazna binarna datoteka ispit.dat je kreirana.\n");
}
int main() {
  struct Student studenti[300], tmp;
  FILE *ulaz;
  int i, j, vel, max, opcija;

  /*Otvaranje datoteka */
  if ((ulaz = fopen("ispit.txt", "r")) == NULL) {
    printf("Greska pri otvaranju datoteke ispit.txt");
    return 1;
  }

  // Ucitavanje datoteke u niz studenti
  i = 0;
  while (fscanf(ulaz, "%20s%15s%2d%2d\n", studenti[i].prezime, studenti[i].ime,
                &studenti[i].broj_bodova, &studenti[i].broj_bodova2) == 3 &&
         i < 300)
    i++;
  vel = i;

  for (i = 0; i < vel; i++) {
    studenti[i].ukupno = studenti[i].broj_bodova + studenti[i].broj_bodova2;
  }

  // sortiranje niza po broju redova
  for (i = 0; i < vel; i++) {
    max = i;
    for (j = j + 1; j < vel; j++)
      if (studenti[j].ukupno > studenti[max].ukupno)
        max = j;
    tmp = studenti[i];
    studenti[i] = studenti[max];
    studenti[max] = tmp;
  }

  do {
    printf("Unesite 1 za unos, 2 za ispis, 0 za izlaz: ");
    scanf("%d", &opcija);

    if (opcija == 1) {
      printf("Unesite ime: ");
      scanf("%s", studenti[vel].ime);
      printf("Unesite prezime: ");
      scanf("%s", studenti[vel].prezime);
      printf("Unesite broj bodova na I parcijalnom: ");
      studenti[vel].broj_bodova = unos_bodova();

      printf("Unesite broj bodova na II parcijalnom: ");
      studenti[vel].broj_bodova2 = unos_bodova();

      studenti[vel].ukupno =
          studenti[vel].broj_bodova + studenti[vel].broj_bodova2;
      vel++;
    } else if (opcija == 2) {
      printf("Ispis svih unesenih podataka:\n");
      for (i = 0; i < vel; i++) {
        printf("%-20s%-15s %2d %2d\n", studenti[i].ime, studenti[i].prezime,
               studenti[i].broj_bodova, studenti[i].broj_bodova2);
      }
    } else if (opcija == 3) {
      upis_usmeni(studenti, vel);
    }
  } while (opcija != 0);

  upis_ispit(studenti, vel);
  fclose(ulaz);
  return 0;
}