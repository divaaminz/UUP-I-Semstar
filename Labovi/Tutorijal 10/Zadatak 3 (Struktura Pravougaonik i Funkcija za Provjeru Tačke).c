/*U prethodnom programu dodajte novu strukturu Pravougaonik, a zatim dodajte
funkcije obim_pravougaonika i povrsina_pravougaonika, te funkciju
tacka_u_pravougaoniku koja vraća logičku istinu (1) ako se tačka nalazi u
pravougaoniku ili na rubu pravougaonika, a u suprotnom logičku neistinu (0).
Radi jednostavnosti pretpostavićemo da su stranice pravougaonika poravnate sa
koordinatnim osama (za vježbu možete probati uraditi zadatak bez ove
pretpostavke). Ovakav pravougaonik može biti opisan preko dvije tačke
(koordinate donjeg lijevog i gornjeg desnog ugla)*/

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

struct Pravougaonik {
  struct Tacka donji_lijevi;
  struct Tacka gornji_desni;
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
struct Pravougaonik unos_pravougaonika() {
  struct Pravougaonik p;
  printf("Unesite donji lijevi ugao pravougaonika:\n");
  p.donji_lijevi = unos_tacke();
  printf("Unesite gornji desni ugao pravougaonika:\n");
  p.gornji_desni = unos_tacke();
}

float udaljenost(struct Tacka t1, struct Tacka t2) {
  return sqrt((t1.x - t2.x) * (t1.x - t2.x) + (t1.y - t2.y) * (t1.y - t2.y));
}

double obim_kruznice(struct Kruznica k) { return 2 * PI * k.poluprecnik; }

double povrsina_kruznice(struct Kruznica k) {
  return PI * k.poluprecnik * k.poluprecnik;
}

double obim_pravougaonika(struct Pravougaonik p) {
  double sirina = p.gornji_desni.x - p.donji_lijevi.x;
  double visina = p.gornji_desni.y - p.donji_lijevi.y;
  return 2 * (sirina * visina);
}

double povrsina_pravougaonika(struct Pravougaonik p) {
  double sirina = p.gornji_desni.x - p.donji_lijevi.x;
  double visina = p.gornji_desni.y - p.donji_lijevi.y;
  return sirina * visina;
}

int tacka_u_pravougaoniku(struct Pravougaonik p, struct Tacka t) {
  return t.x >= p.donji_lijevi.x && t.x <= p.gornji_desni.x &&
         t.y >= p.donji_lijevi.y && t.y <= p.gornji_desni.y;
}

int main() {
  struct Kruznica k;
  struct Pravougaonik p;
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

  printf("Unesite pravougaonik:\n");
  p = unos_pravougaonika();

  printf("Obim kruznice: %.2lf\n", obim_pravougaonika(p));
  printf("Povrsina kruznice: %.2lf\n", povrsina_pravougaonika(p));

  if (tacka_u_pravougaoniku(p, t))
    printf("Tacka je unutar pravougaonika ili na ivici.");
  else
    printf("Tacka je izvan pravougaonika.");

  return 0;
}