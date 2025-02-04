/*Objasnite detaljno kako nastaju odgovarajući rezultati varijabli a, b, c, d, e, f,
g i h. Postoje li neki dijelovi izvornog koda koji su problematični?
*/

#include <stdio.h>
#include <stdlib.h>

void mess(int *n) {
  printf("%d\n", *n++);
  printf("%d\n", *++n);
  printf("%d\n", -2 [n]);
  printf("%d\n", (-2)[n]);
  printf("%d\n", n[-6]);
}

int main(void) {
  int myValues[] = {9, 0, 8, 1, 7,
                    2, 6, 3, 5, 4}; // niz sacinjen od 10 elemenata
  int a = myValues[3]; // myValues pristupa 4. elementu niza myValues[3]=1
  int *p1;
  p1 = &myValues[0];
  int b = *p1; // pokazivac postavljen na adresu prvog elementa niza,
               // dereferenciranje na toj adresi
  int c =
      (*p1 + 3) - *(p1 + 3); // pokazivac na citavu zagradu iznosi myValues[3]=1
  p1 = myValues;             // pokayivac pokayuje na pocetak niza
  int d = *(p1 + 5);         // pristupa myValues[5]
  p1 = &myValues[4];         // p1 pokazuje na cetvrti element niza (7)
  int e = *(p1 - 1);         // Pristupa 3 elementu niza (1)
  myValues[2] = 12345;       // Vrijednost 2 elementa je izmijenjena
  int f = *(p1 - 2);         // ukazuje na novu vrijednost

  printf("a: %d \n", a);
  printf("b: %d \n", b);
  printf("c: %d \n", c);
  printf("d: %d \n", d);
  printf("e: %d \n", e);
  printf("f: %d \n", f);

  mess(&myValues[3]); // obradjuje pokazivac na myValues[3], te ulazni pokazivac
                      // n pokazuje na myValues[3]={1}

  return EXIT_SUCCESS;
}
