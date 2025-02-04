#include <stdio.h>
#define DUZINA 10
/*zadatak za unos dva niza a i b, unosi se dok korisnik ne unese broj -1, a zatim niz a i b spoje u novonastali niz c*/
int main() {
  int a[DUZINA], b[DUZINA], c[2 * DUZINA], i, duzinaA, duzinaB; 
  
  /*Unos elemenata za niz A*/
  printf("Unesite elemente niza A: ");
  for (i = 0; i < DUZINA; i++) {
    scanf("%d", &a[i]);
    if (a[i] == -1)
      break;
  }
  duzinaA = i; 
  
  /*Unos elemenata za niz B*/
  printf("Unesite elemente niza B: ");
  for (i = 0; i < DUZINA; i++) {
    scanf("%d", &b[i]);
    if (b[i] == -1)
      break;
  }
  duzinaB = i;
  
  //Petlja za dodjeljivanje elemenata niza A i B nizu C
  for (i = 0; i < duzinaA; i++)
    c[i] = a[i];
  for (i = 0; i < duzinaB; i++)
    c[duzinaA + i] = b[i];

  printf("Niz C glasi: ");
  for (i = 0; i < duzinaA + duzinaB - 1; i++) { 
    printf("%d,", c[i]);
  }
  printf("%d", c[duzinaA + duzinaB - 1]);
  return 0;
}
