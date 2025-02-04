/*Ulazna datoteka koja je tekstualna, korisnik unosi neku rijec, u drugoj
 * datoteci se ispisuje tekst iz prve datoteka i prvobitna rijec kju je korisnik
 * unio mijenjamo sa drugom rijecju koju je korisnik takodjer unio.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void unesi(char niz[], int velicina) {
  char znak = getchar();
  if (znak == '\n')
    znak = getchar();
  int i = 0;
  while (i < velicina - 1 && znak != '\n') {
    niz[i] = znak;
    i++;
    znak = getchar();
  }
  niz[i] = '\0';
}

int main() {
  FILE *ulaz, *izlaz;
  char rijec[20], zamijenjeno[20];

  ulaz = fopen("ulaz.txt", "r");
  izlaz = fopen("izlaz.txt", "w");
  if (ulaz == NULL || izlaz == NULL) {
    printf("Greska pri otvaranju datoteka.\n");
    return 1;
  }

  printf("\nUnesite jednu rijec do 20 znakova (enter za kraj): ");
  unesi(rijec, 20);
  printf("\nUnesite rijec kojom cete zamijeniti prethodnu rijec (enter za "
         "kraj): ");
  unesi(zamijenjeno, 20);

  char znak[20];
  int index;
  char ch;
  while ((ch = fgetc(ulaz)) != EOF) {
    if (ch == ' ' || ch == '\n' || ch == 't') {
      znak[index] = '\n';

      if (strcmp(rijec, zamijenjeno) == 0) {
        fprintf(izlaz, "%s", zamijenjeno);
      } else {
        fprintf(izlaz, "%s", rijec);
      }
      fputc(ch, izlaz); // Razmak ili novi red
      index = 0;        // reset
    } else {
      znak[index++] = ch; // dodaje karakter u rijec
    }
  }

  // Posljednja rijec
  znak[index] = 0;
  if (strcmp(rijec, zamijenjeno) == 0) {
    fprintf(izlaz, "%s", zamijenjeno);
  } else {
    fprintf(izlaz, "%s", rijec);
  }

  fclose(ulaz);
  fclose(izlaz);
  return 0;
}
