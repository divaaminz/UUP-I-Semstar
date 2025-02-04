/*Koristite jednu ili više while petlji da kreirate program koji izračunava
brojeve 1 do n i od n nazad na 1 treba da izlaz. Za n = 5 Izlaz programa bi
trebao izgledati ovako.

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4
1 2 3
1 2
*/
#include <stdio.h>

int main() {
  int n, i, j;

  printf("Unesite neku vrijednost n: ");
  scanf("%d", &n);

  // od 1 do n
  i = 1;
  while (i <= n) {
    j = 1;
    while (j <= i) {
      printf("%d ", j);
      j++;
    }
    printf("\n");
    i++;
  }

  // od n-1 do 1
  i = n - 1;
  while (i >= 1) {
    j = 1;
    while (j <= i) {
      printf("%d ", j);
      j++;
    }
    printf("\n");
    i--;
  }
  return 0;
}
