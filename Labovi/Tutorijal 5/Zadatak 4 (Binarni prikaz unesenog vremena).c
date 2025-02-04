/*Napišite program koji čita vrijeme od korisnika na komandnoj liniji (prvo
sate, a zatim minute). Ispišite vrijeme binarno tako da X predstavlja 1, a O
predstavlja 0. Primjer: Korisnik unese 11 i 30, program ispisuje XOXX (8 + 2 + 1
= 11) i OXXXXO (16 + 8 + 4 + 2 = 30). Uvijek koristite četiri cifre za sate i 6
cifara za minute.*/
#include <stdio.h>

int main() {
  int sati, minute, i = 0;

  // Unos vremena
  printf("Unesite sate: ");
  scanf("%d", &sati);
  printf("Unesite minute: ");
  scanf("%d", &minute);

  if (sati < 0 || sati > 23 || minute < 0 || minute > 59) {
    printf("Unos nije validan");
    return 1;
  }

  printf("Sati: ");
  for (i = 3; i >= 0; i--) { // 4 bita
    if (sati & (1 << i)) {
      printf("X");
    } else {
      printf("0");
    }
  }
  printf("\n");

  printf("Minute: ");
  for (i = 5; i >= 0; i--) {
    if (minute & (1 << i)) {
      printf("X");
    } else {
      printf("0");
    }
  }
  printf("\n");
  return 0;
}
