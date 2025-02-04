// Napisati program gdje korisnik unosi string sa tastature i izdvaja posljednju
// rijec
#include <stdio.h>

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

void zadnja_rijec(char *s) {
  int i = 0, pocetak = 0, kraj = 0;

  while (s[i] != '\0') {
    if (s[i] == ' ') {
      kraj = i;
    } else if (s[i + 1] == '\0' || s[i + 1] == ' ') {
      pocetak = kraj + 1;
      kraj = i + 1;
    }
    i++;
  }

  for (i = pocetak; i < kraj; i++) {
    putchar(s[i]);
  }
  printf("\n");
}

int main() {
  char a[80];
  printf("\nUnesite jednu rijec do 80 znakova (enter za kraj): ");
  unesi(a, 80);
  printf("\nPosljednja rijec je: ");
  zadnja_rijec(a);
  return 0;
}
