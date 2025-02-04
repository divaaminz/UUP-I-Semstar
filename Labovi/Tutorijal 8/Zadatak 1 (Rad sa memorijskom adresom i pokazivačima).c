/*Dat je sljedeći dio memorije. Adresa je lijevo, sadržaj bajta na ovoj adresi
je desno. Pretpostavimo da su tip int i pokazivač dugi 8 bita. U našem slučaju,
tip long int ima 16 bita.
• Varijabla int a je na adresi 12. Dakle, šta printf("%d", a) ispisuje?
• S obzirom na varijablu int d . Naredba printf("%d", d) ispisuje 115.
Dakle, šta će printf("%p", &d) ispisati?
• Pokazivač int* p je na adresi 22. Na koju adresu upućuje ovo? Šta se
ispisuje sa printf("%p", p) i sa printf("%d", *p)?
• Dat je pokazivač int* pc. Naredba printf("%d", *pc) ispisuje 127 na
ekran. Na koju adresu pokazuje pokazivač? Na kojoj adresi je pokazivač?
• Uzmimo u obzir varijablu int b. Naredba printf("%d", b) ispisuje 56.
Kakav će biti izlaz naredbe printf("%p", &b)?
1
• Long int* lp pokazivač je na adresi 13. Kolika je dužina ovog pokazivača
u bajtovima? Kolika je dužina memorijske oblasti na koju se odnosi. Šta
će printf("%ld", *lp) naredba ispisati?
• Kreiramo novu varijablu int c = 64 i kompajler je stavlja na adresu 16.
Zatim kreiramo pokazivač int* pc = &c . Smislite ispravnu adresu za
pokazivač i popunite specificiranu memoriju ispravnom vrijednošću. Pretpostavimo
da su sve memorijske oblasti sa vrijednošću 0 koje prije nisu korištene
slobodne. Adresa Sadržaj (binarni) . . . . . . 08 00000000 09 00111000 10
00000000 11 00000000 12 00000111 13 00001101 14 00000001 15 00000000 16 00000000
17 00000000
18 01111111
19 00000000
20 00100110
21 00000000
22 00011011
23 00000000
24 00000000
25 00000000
26 00000000
27 00010010
28 00000000
29 01110011
30 00000000
. . . . . .
Uputstvo:
• Za bolje razumijevanje, lijevo od svake memorijske adrese, zabilježite tip
objekta koji je ovdje pohranjen, ako je poznat iz gore navedenog. Za svaki
pokazivač nacrtajte strelicu do memorijske adrese na koju pokazuje.
• C standard propisuje da cijeli brojevi moraju pokrivati raspon vrijednosti
od najmanje 16 bita. Pretpostavka da su cijeli brojevi dugi 8 bita ovdje
je napravljena radi bolje čitljivosti.
*/
#include <stdint.h>
#include <stdio.h>

int main() {
  uint8_t memory[32] = {
      0x00, 0x38, 0x00, 0x00, 0x07, 0x0D, 0x01, 0x00,  // 08-15
      0x00, 0x00, 0x7F, 0x00, 0x26, 0x00, 0x1B, 0x00,  // 16-23
      0x00, 0x00, 0x00, 0x12, 0x00, 0x73, 0x00, 0x00}; // 24-31

  // Varijabla int a na adresi 12 (1 bajt)
  int a = memory[12];
  printf("a = %%%d\n", a); // Ispisana vrijednost je 7

  // Varijabla int d ispisuje 115, dok je adresa 29 prema memoriji
  int d = 115;
  printf("%d = %%p\n", (void *)&memory[29]); // Adresa je 0x29

  int *p = (int *)&memory[26];
  printf("p = %%p\n", (void *)p);
  printf("*p = %%%d\n", *p);

  int *pc = (int *)&memory[18];
  printf("pc = %%p\n", (void *)pc);
  printf("*pc = %%%d\n", *pc);

  // Varijabla int a na adresi 12 (1 bajt)
  int b = 56;
  printf("&b = %%p\n", (void *)memory[9]); // Adresa je 0x09

  long int *lp = (long int *)&memory[13];
  printf("lp = %%p\n", (void *)lp);
  printf("*lp = %%%ld\n", *lp);

  int c = 64;
  int *pc_new = (int *)memory[16];
  *pc_new = c;
  printf("pc_new = %%p\n", (void *)pc_new);
  printf("*pc_new = %%%d\n", *pc_new);

  return 0;
}
