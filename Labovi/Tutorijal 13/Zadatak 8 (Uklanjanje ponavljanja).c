/*Program uklanja sve znakove koji se ponavljaju u stringu pomocu petlji*/
#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  printf("Unesite string: ");
  scanf("%s", str);

  int i, j, k;
  int n = strlen(str);
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n;) {
      if (str[i] == str[j]) {
        for (k = j; k < n; k++) {
          str[k] = str[k + 1];
        }
        n--;
      } else {
        j++;
      }
    }
  }

  printf("String bez ponavljajucih znakova: %s\n", str);
  return 0;
}
