/*U prethodnom programu dodajte funkcije obim_kruznice i povrsina_kruznice, a u
main dodajte kod koji poziva ove funkcije i ispisuje njihov rezultat.*/

#include <math.h>
#include <stdio.h>
#define PI 3.14

struct Tacka {
  double x, y;
};

struct Kruznica {
  struct Tacka centar;
  double poluprecnik;
};

struct Tacka unos_tacke() {
  struct Tacka t;
  printf("Unesite koodrinate tacke (x,y): ");
  scanf("%lf, %lf", &t.x, &t.y);
  return t;
}

struct Kruznica unos_kruznice() {
  struct Kruznica k;
  printf("Unesite centar kruznice:\n");
  k.centar = unos_tacke();
  printf("Unesite poluprecnik kruznice: ");
  scanf("%lf", &k.poluprecnik);
  return k;
}

float udaljenost(struct Tacka t1, struct Tacka t2) {
  return sqrt((t1.x - t2.x) * (t1.x - t2.x) + (t1.y - t2.y) * (t1.y - t2.y));
}

double obim_kruznice(struct Kruznica k) { return 2 * PI * k.poluprecnik; }

double povrsina_kruznice(struct Kruznica k) {
  return PI * k.poluprecnik * k.poluprecnik;
}

int main() {
  struct Kruznica k;
  struct Tacka t;
  double d;
  printf("Unesite kruznicu:\n");
  k = unos_kruznice();
  printf("Unesite neku tacku:\n");
  t = unos_tacke();

  d = udaljenost(t, k.centar);
  if (d < k.poluprecnik)
    printf("Tacka je unutar kruznice.");
  else if (d == k.poluprecnik)
    printf("Tacka je na kruznici.");
  else
    printf("Tacka je izvan kruznice.");

  printf("Obim kruznice: %.2lf\n", obim_kruznice(k));
  printf("Povrsina kruznice: %.2lf\n", povrsina_kruznice(k));
  return 0;
}