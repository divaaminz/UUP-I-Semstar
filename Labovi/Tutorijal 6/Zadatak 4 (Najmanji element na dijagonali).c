/*Napisati program koji učitava matricu cijelih brojeva dimenzija 10x10 te
pronalazi najmanji element na glavnoj dijagonali.*/

#include <stdio.h>
#define VELICINA 10

int main() {
  int matrica[VELICINA][VELICINA], i, j, min;

  // Unos matrice
  printf("Unesite elemente matrice %dx%d velicine", VELICINA, VELICINA);
  for (i = 0; i < VELICINA; i++) {
    for (j = 0; i < VELICINA; j++) {
      scanf("%d", &matrica[i][j]);
    }
  }

  // pronalazak najmanjeg elementa na dijagonali
  for (i = 0; i < VELICINA; i++) {
    if (matrica[i][j] < min)
      min = matrica[i][i]; /*Glavnu dijagonalu cine [1][1], [2][2], [3][3],
                              [4][4]... [n],[n]*/
  }

  printf("%d", min);
  return 0;
}
