/*Program za mnozenje matrica pomocu pokazivaca*/
#include <stdio.h>

void mnoziMatrice(int *A, int *B, int *C, int n, int m, int p) {
  int i, j, k;
  for (i = 0; i < n; i++) {
    for (j = 0; j < p; j++) {
      *(C + i * p + j) = 0;
      for (k = 0; k < m; k++) {
        *(C + i * p + j) += *(A + i * m + k) * *(B + k * p + j);
      }
    }
  }
}

int main() {
  int n, m, p;
  printf("Unesite dimenzie matrica (n x m) i (m x p): ");
  scanf("%d %d %d", &n, &m, &p);

  int A[n][m], B[m][p], C[n][p];
  printf("Unesite elemente prve matrice:\n");
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  printf("Unesite elemente druge matrice:\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < p; j++) {
      scanf("%d", &B[i][j]);
    }
  }
  mnoziMatrice((int *)A, (int *)B, (int *)C, n, m, p);
  printf("Rezultat mnozenja matrica:\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < p; j++) {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }
  return 0;
}
