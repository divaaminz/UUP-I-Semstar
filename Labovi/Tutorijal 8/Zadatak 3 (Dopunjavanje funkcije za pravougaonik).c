/*Dopunite nedostajući kod. Funkcija rectangle pohranjuje rezultat koristeći
pokazivače površine, obima i dijagonale. Nemojte brisati postavljene dijelove
koda!
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void rectangle(double l, double w, double *area, double *circumference,
               double *diagonal) {
  *area = 1 * w;                   // Povrsina
  *circumference = 2 * (l + w);    // Obim
  *diagonal = sqrt(l * l + w * w); // Dijagonala
}

int main(void) {
  double l = 1.0;
  double w = 2.0;
  double area, circumference, diagonal;

  rectangle(l, w, &area, &circumference, &diagonal);

  printf("%f\n", area);
  printf("%f\n", circumference);
  printf("%f\n", diagonal);
  return 0;
}
