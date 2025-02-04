/*Napravite program koji na ekranu iscrtava pravougaonik pri čemu su date
stranice a i b pravougaonika. Za iscrtavanje koristite znakove: minus (-) za
vodoravne linije, pipe (|) za uspravne i plus (+) za ćoškove. Primjer ulaza i
izlaza programa:
1
Unesite stranice pravougaonika a,b: 7,5
+-----+
| |
| |
| |
+-----+
*/
#include <stdio.h>

int main() {
  int a, b, i, j;
  printf("Unesite stranice pravougaonika a,b: ");
  scanf("%d %d", &a, &b);

  // vrh pravougaonika
  printf("+");
  for (i = 0; i < a; i++) {
    printf("-");
  }
  printf("+\n");

  // sredina pravougaonika
  for (i = 0; i < b; i++) {
    printf("|");
    for (j = 0; i < a; j++) {
      printf(" ");
    }
    printf("|\n");
  }

  // Donja ivica
  printf("+");
  for (i = 0; i < a; i++) {
    printf("-");
  }
  printf("+\n");

  return 0;
}
