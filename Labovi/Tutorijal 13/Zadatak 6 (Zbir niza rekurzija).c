/*Program pronalazi zbir elemenata niza pomocu rekurzije*/
#include <stdio.h>

// Funkcija za pronalazenje zbira niza pomocu rekurzije
int zbirNiza(int niz[], int velicina) {
  if (velicina == 0) {
    return 0; // Bazni slucaj;
  }
  return niz[velicina - 1] + zbirNiza(niz, velicina - 1);
}

int main() {
  int niz[100], velicina;
  int i;
  printf("Unesite broj elemenata niza: ");
  scanf("%d", &velicina);

  printf("Unesite elemente niza: \n");
  for (i = 0; i < velicina; i++) {
    scanf("%d", &niz[i]);
  }

  int zbir = zbirNiza(niz, velicina);
  printf("Zbir elemenata niza je: %d\n", zbir);
  return 0;
}
