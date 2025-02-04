// Implementirajte program koji mijenja vrijednost dvije varijable i ispisuje ih
// prije i poslije zamjene.

#include <stdio.h>

int main() {
  int a, b;
  a = 10;
  b = 25;

  printf("Brojevi prije zamjene: a=%d, b=%d", a, b);
  int temp = a;
  a = b; // Ukoliko bismo stavili b=a, kao sto je i testirano, dobili bismo samo
         // vrijednosti 10 i za a i za b
  b = temp;

  printf("\nBrojevi nakon promjene: a=%d, b=%d", a, b);
  return 0;
}