/* Napisati program koji ucitava tri cijela broja iz intervala 
od 50 do 200. Ako svi uneseni brojevi nisu iz tog intervala, 
program treba ispisati poruku "Svi brojevi nisu iz intervala 50 
do 200” i završiti program. Ako su brojevi unutar tog intervala 
program treba ispisati ucitane brojeve po velicini od najmanjeg 
prema najvecem.*/

#include <stdio.h>

int main() {
    int x[3], i, j, p;
    printf("Unesite 3 broja u intervalu od 50 do 200: ");
    scanf("%d %d %d", &x[0], &x[1], &x[2]);

    // Proverava da li su svi brojevi unutar intervala [50, 200]
    if (x[0] >= 50 && x[0] <= 200 && x[1] >= 50 && x[1] <= 200 && x[2] >= 50 && x[2] <= 200) {
        // Sortiranje brojeva po veličini
        for (i = 0; i < 2; i++) {
            for (j = i + 1; j < 3; j++) {
                if (x[i] > x[j]) {
                    p = x[i];
                    x[i] = x[j];
                    x[j] = p;
                }
            }
        }
        printf("\nIspis sortiranih brojeva: %d, %d, %d", x[0], x[1], x[2]);
    } else {
        printf("Svi brojevi nisu iz intervala 50 do 200");
        return 1;
    }
    return 0;
}
