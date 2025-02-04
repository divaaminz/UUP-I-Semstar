/*Napravite program za unos podataka putem tastature u datoteku ispit.txt
specificiranu u prethodnom zadatku. Ovaj program ne smije da briše postojeću
datoteku ispit.txt nego treba dodavati nova polja u nju! Program treba da vrši
kontrolu ispravnosti podataka i traži ponovan unos ako su podaci neispravni.
Primjer ulaza i izlaza: Unesite 1 za unos, 2 za ispis, 0 za izlaz: 1 Unesite
ime: Meho Unesite prezime: Mehic Unesite broj bodova na I parcijalnom: 10
Unesite broj bodova na II parcijalnom: 8
Unesite 1 za unos, 2 za ispis, 0 za izlaz: 2
1. Meho Mehic - 10, 8
Unesite 1 za unos, 2 za ispis, 0 za izlaz: 0*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
  char prezime[20];
  char ime[15];
  int broj_bodova1; /*Bodovi na prvom parcijalnom*/
  int broj_bodova2; /*Bodovi na drugom parcijalnom*/
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

int main() {
  struct Student student;
  FILE *datoteka;
  int opcija;

  // Otvoriti datoteku u rezimu append da ne brise postojeci sadrzaj
  if ((datoteka = fopen("ispit.txt", "a")) == NULL) {
    printf("Greska pri otvaranju datoteke ispit.txt\n");
    return 1;
  }

  do {
    printf("Unesite 1 za unos, 2 za ispis, 0 za izlaz: ");
    scanf("%d", &opcija);

    switch (opcija) {
    case 1:
      printf("Unesite ime: ");
      scanf("%s", student.ime);
      printf("Unesite prezime: ");
      scanf("%s", student.prezime);
      printf("Unesite broj bodova na I parcijalnom: ");
      student.broj_bodova1 = unos_bodova();

      printf("Unesite broj bodova na II parcijalnom: ");
      student.broj_bodova2 = unos_bodova();

      fprintf(datoteka, "%s %s %d %d\n", student.ime, student.prezime,
              student.broj_bodova1, student.broj_bodova2);
      break;

    case 2:
      fseek(datoteka, 0, SEEK_SET);
      printf("Ispis svih unesenih podataka:\n");
      while (fscanf(datoteka, "%s %s %d %d\n", student.ime, student.prezime,
                    &student.broj_bodova1, &student.broj_bodova2) == 4) {
        printf("%s %s - %d, %d\n", student.ime, student.prezime,
               student.broj_bodova1, student.broj_bodova2);
      }
      break;
    default:
      fclose(datoteka);
      return 0;
    }
  } while (opcija != 0);
  fclose(datoteka);
  return 0;
}