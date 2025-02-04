//Program za pronalazak polindroma

#include <stdio.h>

int main() {
  int broj, originalni, obrnuti = 0, ostatak;

  printf("Unesite broj: ");
  scanf("%d", &broj);

  originalni = broj;

  while (broj != 0) {
    ostatak = broj % 10;
    obrnuti = obrnuti * 10 + ostatak;
    broj /= 10;
  }

  if (originalni == obrnuti) {
    printf("%d je palindrom!", originalni);
  } else
    printf("%d nije palindrom!", originalni);

  return 0;
}
