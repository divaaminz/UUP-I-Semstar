/*Program ucitava elemente u matrici i provjerava je li jedinicna matrica*/
#include <stdio.h>

int main() {
  int n, i, j;
  printf("Unesite dimenziju kvadratne matrice(nxn): ");
  scanf("%d", &n);

  int matrica[n][n];
  printf("Unesite elemente matrice:\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &matrica[i][j]);
    }
  }

  int identitet = 1;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if ((i == j && matrica[i][j] != 1) || (i != j && matrica[i][j] != 0)) {
        identitet = 0;
        break;
      }
    }
  }

  if (identitet) {
    printf("Ovo je jedinicna matrica.\n");
  } else {
    printf("Ovo nije jedinicna matrica.\n");
  }

  return 0;
}
