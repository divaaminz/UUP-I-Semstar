/*Prepravite program iz zadatka 2 tako da podatke umjesto u tekstualnoj datoteci
usmeni.txt drži u binarnoj datoteci usmeni.dat*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
  char prezime[20];
  char ime[15];
  int broj_bodova;  // bodovi na parcijalnom
  int broj_bodova2; // bodovi na drugom parcijalnom
  int ukupno;       // ukupno bodovi
};

int main() {
  struct Student studenti[300], tmp;
  FILE *ulaz, *izlaz_ispit, *izlaz_usmeni;
  int i, j, vel, max;

  /*Otvaranje datoteka */
  if ((ulaz = fopen("ispit.txt", "r")) == NULL) {
    printf("Greska pri otvaranju datoteke ispit.txt");
    return 1;
  }

  if ((izlaz_ispit = fopen("ispit_sortiran.txt", "w")) == NULL) {
    fclose(ulaz);
    printf("Greska pri otvaranju datoteke ispit_sortiran.txt");
    return 1;
  }
  if ((izlaz_usmeni = fopen("ispit_sortiran.txt", "wb")) == NULL) {
    fclose(ulaz);
    fclose(izlaz_ispit);
    printf("Greska pri otvaranju datoteke ispit_sortiran.txt");
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

  // Upisivanje studenta koji su polozili oba ispita

  for (i = 0; i < vel; i++) {
    if (studenti[i].broj_bodova >= 10 && studenti[i].broj_bodova2 >= 10) {
      fwrite(&studenti[i], sizeof(struct Student), 1, izlaz_usmeni);
    }
  }

  // Upis niza u datoteku
  for (i = 0; i < vel; i++)
    fprintf(izlaz_ispit, "-%20s%-15s%2d%2d\n", studenti[i].prezime,
            studenti[i].ime, studenti[i].broj_bodova, studenti[i].broj_bodova2);

  printf("Izlazne datoteke su kreirane\n");
  fclose(ulaz);
  fclose(izlaz_ispit);
  fclose(izlaz_usmeni);
  return 0;
}