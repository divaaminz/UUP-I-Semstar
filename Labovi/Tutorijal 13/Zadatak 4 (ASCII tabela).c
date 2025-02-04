/*Zadatak za ispis ASCII TABELE*/
#include <stdio.h>

int main() {
  printf("| "
         "---------------------------------------------------------------------"
         "------------------"
         "|\n");
  printf("Extended ASCII Table - Excluding Control Characters |\n");
  printf("| Ch Dec Hex | Ch Dec Hex | Ch Dec Hex |Ch Dec Hex |Ch Dec Hex |Ch "
         "Dec Hex |Ch Dec Hex |\n");
  printf("| "
         "-------------------------------------------------------------------"
         "--------------------"
         "|\n");
  int i;
  for (i = 32; i <= 255; i++) {
    printf("| %c %3d 0x%02x ", i, i, i);
    if ((i - 31) % 7 == 0)
      printf("|\n");
  }

  printf("\n| "
         "---------------------------------------------------------------------"
         "------------------------------------------------------------------|");
  return 0;
}
