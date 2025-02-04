/*Prepravite prethodni program tako da određuje koliko sati, minuta i sekundi je
proteklo između dva vremena. Funkcija proteklo treba vraćati struct Vrijeme. Na
primjer: Unesite prvo vrijeme (h m s): 1 15 30 Unesite drugo vrijeme (h m s): 2
30 15 Izmedju dva vremena je proteklo: 1 sati, 14 minuta i 45 sekundi. Ponovo
obratite pažnju na situaciju kada je drugo vrijeme ispred prvog*/

#include <stdio.h>

struct Vrijeme {
  int sati;
  int minute;
  int sekunde;
};

struct Vrijeme unos_vremena() {
  struct Vrijeme v;
  printf("Unesite vrijeme(h m s): ");
  scanf("%d %d %d", &v.sati, &v.minute, &v.sekunde);
  return v;
}

struct Vrijeme proteklo(struct Vrijeme v1, struct Vrijeme v2) {
  int sekunde_v1 = v1.sati * 3600 + v1.minute * 60 + v1.sekunde;
  int sekunde_v2 = v2.sati * 3600 + v2.minute * 60 + v2.sekunde;

  int razlika = sekunde_v1 - sekunde_v2;
  if (razlika < 0)
    razlika = -razlika;

  struct Vrijeme rezultat;
  rezultat.sati = razlika / 3600;
  razlika %= 3600;
  rezultat.minute = razlika / 60;
  rezultat.sekunde = razlika % 60;
  return rezultat;
}

int main() {
  struct Vrijeme v1, v2;
  struct Vrijeme razlika;

  printf("Unesite prvo vrijeme:\n");
  v1 = unos_vremena();
  printf("Unesite drugo vrijeme:\n");
  v2 = unos_vremena();

  razlika = proteklo(v1, v2);

  printf("Izmedju dva vremena je proteklo: %d sati, %d minuta i %d sekundi.\n",
         razlika.sati, razlika.minute, razlika.sekunde);
  return 0;
}