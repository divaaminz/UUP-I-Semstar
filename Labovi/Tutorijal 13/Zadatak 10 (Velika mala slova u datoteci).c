/*Program za promjenu velicinu slova u datoteci*/
#include <ctype.h>
#include <stdio.h>


int main() {
  FILE *ulaz, *izlaz;
  char znak;

  ulaz = fopen("ulaz.txt", "r");
  izlaz = fopen("izlaz.txt", "w");
  if (ulaz == NULL || izlaz == NULL) {
    printf("Greska pri otvaranju datoteka.\n");
    return 1;
  }

  while ((znak = fgetc(ulaz)) != EOF) {
    if (islower(znak)) {
      fputc(toupper(znak), izlaz);
    } else if (isupper(znak)) {
      fputc(tolower(znak), izlaz);
    } else {
      fputc(znak, izlaz);
    }
  }
  fclose(ulaz);
  fclose(izlaz);
  
  printf("Promjena velicine slova uspjesno je izvrsena.\n");
  return 0;
}
