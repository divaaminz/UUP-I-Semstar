/*Napravite funkciju int prost(int x) koja vraća 1 (logička istina) ako je broj
x prost, a 0 (logička neistina) ako x nije prost. Zatim iskoristite ovu funkciju
u programu koji ispisuje sve proste brojeve između 1 i 100 (svaki broj u
zasebnom redu). Napomena: Zadaci 4, 5 i 6 nemaju autotestova. Potrebno je da
sami kreirate testne primjere*/

#include <stdio.h>

/*Funkcija */
int prost(int x) {
  int i;
  if (x < 2) {
    return 0; /*Brojevi manji od 2 nisu prosti*/
  }
  for (i = 2; i * i <= x; i++) { /*Provjerava kvadratni korijen*/
    if (x % i == 0) {
      return 0; /*Ako je broj djeljiv sa bilo kojim i, nije prost*/
    }
  }
  return 1; /*Broj je prost ako nije djeljiv ni sa jednim brojem*/
}

int main() {
  int i;
  /*Ispis prostih brojeva od 1 do 100*/
  printf("Prosti brojevi između 1 i 100 su:\n");
  for (i = 1; i <= 100; i++) {
    if (prost(i)) {
      printf("%d\n", i); // Ispis broja ako je prost
    }
  }
  /*Moguce je prilagoditi program da ispisuje brojeve od 1 do n broja koji
   * korisnik unese*/
  return 0;
}
