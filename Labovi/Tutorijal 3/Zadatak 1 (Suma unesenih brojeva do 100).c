#include <stdio.h>

int main() {
    int x, suma=0;
    while (suma <= 100){
        printf("Unesite broj: ");
        scanf("%d", &x);
        suma +=x;
    }
    printf("Suma je: %d", suma);

    return 0;
}
