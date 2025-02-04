/*Jednostavni program za ispis desnog trougla*/

#include <stdio.h>

int main() {
  int i, x, j;
  printf("Unesite neki broj n: ");
  scanf("%d", &x);

  for (i = 0; i < x; i++) {
    for (j = 0; j < i + 1; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
