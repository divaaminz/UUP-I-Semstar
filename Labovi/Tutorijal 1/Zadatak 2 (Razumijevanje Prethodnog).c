/*Modificirajte program da pored površine kruga i zapremine kugle sa
 * poluprečnikom R izračunava i površinu lopte sa tim poluprečnikom. Napomena
 * površina lopte se računa formulom R=4r^2*pi*/

#include <stdio.h>
#define PI 3.14

int main() {
  float R, P, V, Pl;

  printf("Unesite poluprecnik: ");
  scanf("%f", &R);
  P = (R * R) * PI;
  V = (4 / 3) * R * R * R * PI;
  Pl = 4 * (R * R) * PI;

  printf("\n Povrsina kruga sa poluprecnikom %2f je %.2f", R, P);
  printf("\n Zapremina kugle sa poluprecnikom %2f je %.2f", R, V);
  printf("\n Povrsina lopte sa poluprecnikom %2f je %.2f", R, Pl);

  return 0;
}
