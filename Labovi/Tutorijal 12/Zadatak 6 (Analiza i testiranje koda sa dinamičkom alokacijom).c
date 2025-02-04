#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  double *data;

  printf("Enter the total number of elements: ");
  scanf("%d", &n);

  // Prvjera za negativne brojeve i 0

  if (n <= 0) {
    printf("Invalid number of elements.\n");
    return 1;
  }

  data = (double *)calloc(n, sizeof(double));
  if (data == NULL) {
    printf("Error!!!Memory not allocated.\n");
    exit(0);
  }

  int i;
  for (i = 0; i < n; ++i) {
    printf("Enter number %d: ", i + 1);
    if (scanf("%lf", data + i) != 1) {
      printf("Invalid input!\n");
      free(data);
      return 1;
    }
  }

  // Pronalazenje najveceg broja
  double largest = data[0]; // prvi element je inicijalna vrijednost
  for (int i = 1; i < n; ++i) {
    if (data[i] > largest) {
      largest = data[i];
    }
  }

  printf("Largest number = %.2lf\n", largest);
  // oslobadjanje memorije
  free(data);
  return 0;
}
