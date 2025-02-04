#include <stdio.h>
// Napisati strukturu datum koja u sebi ima dan mjeseec i godinu i da sadrzi
// strukturu vrijme, te napiati funkciju koja ce naci razliku izmedju dva datuma
// u godinama, mjesecima, danima i vremenu

// def strukturu Vrijeme
typedef struct Vrijeme {
  int sati;
  int minute;
  int sekunde;
} Vrijeme;

struct Vrijeme unos_vremena() {
  Vrijeme v;
  printf("Unesite vrijeme(h m s): ");
  scanf("%d %d %d", &v.sati, &v.minute, &v.sekunde);
  return v;
}
// Def strukturu datum
typedef struct Datum {
  int godina;
  int mjesec;
  int dan;
  Vrijeme vrijeme;
} Datum;

struct Datum unos_datuma() {
  Datum d;
  printf("Unesite datum(d m g): ");
  scanf("%d %d %d", &d.dan, &d.mjesec, &d.godina);
  printf("\nUnesite vrijeme za ovaj datum: ");
  d.vrijeme = unos_vremena();
  return d;
}
// Funckija za ispis broj dana u mjesecu
int brojDanaUMjesecu(int mjesec, int godina) {

  int dani[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  return dani[mjesec - 1];
}

// Funkcija za racunanje razlike datuma
void Razlika(Datum d1, Datum d2, int *godine, int *mjeseci, int *dani,
             Vrijeme *vrijeme) {
  int sekunde1 =
      d1.vrijeme.sati * 3600 + d1.vrijeme.minute * 60 + d1.vrijeme.sekunde;
  int sekunde2 =
      d2.vrijeme.sati * 3600 + d2.vrijeme.minute * 60 + d2.vrijeme.sekunde;

  if (sekunde2 < sekunde1) {
    sekunde2 += 24 * 3600;
    d2.dan--;
  }
  vrijeme->sati = (sekunde2 - sekunde1) / 3600;
  vrijeme->minute = ((sekunde2 - sekunde1) % 3600) / 60;
  vrijeme->sekunde = (sekunde2 - sekunde1) % 60;

  if (d2.dan < d1.dan) {
    d2.dan = brojDanaUMjesecu(d2.mjesec - 1, d2.godina);
    d2.mjesec--;
  }
  if (d2.mjesec < d1.mjesec) {
    d2.mjesec += 12;
    d2.godina--;
  }

  *godine = d2.godina - d1.godina;
  *dani = d2.dan - d1.dan;

  while (d1.godina < d2.godina || d1.mjesec < d2.mjesec || d1.dan < d2.dan) {
    d1.dan++;
    (*dani)++;

    if (d1.dan > brojDanaUMjesecu(d1.mjesec, d1.godina)) {
      d1.dan = 1;
      d1.mjesec++;
    }
    if (d1.mjesec > 12) {
      d1.dan = 1;
      d1.godina++;
    }
  }
}

int main() {
  int godina, mjesec, dani;
  Vrijeme vrijeme;

  printf("Unesite prvi datum:\n");
  Datum d1 = unos_datuma();
  printf("Unesite drugi datum:\n");
  Datum d2 = unos_datuma();

  Razlika(d1, d2, &godina, &dani, &mjesec, &vrijeme);
  printf("Razlika %d godina %d mjeseci %d dana, %02d:%02d:%02d\n", godina,
         mjesec, dani, vrijeme.sati, vrijeme.minute, vrijeme.sekunde);
  return 0;
}