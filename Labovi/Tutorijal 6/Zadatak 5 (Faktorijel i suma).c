/*Napravite funkciju "faktorijel" koja računa faktorijel datog broja. Zatim
iskoristite ovu funkciju za program koji računa sumu: S(x) = Xn i=1
x
i!
Primjer ulaza i izlaza:
Unesite broj n u intervalu [1, 12]: 1
Unesite realan broj x: 2.45Suma od 1 do 1 za x = 2.450 je 2.450*/

#include <math.h>
#include <stdio.h>

// Funkcija za računanje faktorijela
unsigned long long faktorijel(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  return n * faktorijel(n - 1);
}

int main() {
  int n, i;
  double x, suma = 0.0;

  /*Unos nekog broja n u trazenom intervalu*/
  do {
    printf("Unesite broj n u intervalu [1, 12]: ");
    scanf("%d", &n);
    if (n < 1 || n > 12) {
      printf("Uneseni broj nije u traženom intervalu.\n");
    }
  } while (n < 1 || n > 12);

  /*Unos realnog broja*/
  printf("Unesite realan broj x: ");
  scanf("%lf", &x);

  /* Racunanje sume uz pomoc funkcije faktorijela*/
  for (i = 1; i <= n; i++) {
    suma += pow(x, i) / faktorijel(i);
  }

  /* Ispis*/
  printf("Suma od 1 do %d za x = %.3f je %.3f\n", n, x, suma);

  return 0;
}
