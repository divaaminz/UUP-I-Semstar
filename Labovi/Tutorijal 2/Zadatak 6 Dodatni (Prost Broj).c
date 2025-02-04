/*Napisati program koji od korisnika trazi unos broja sa tastature i provjerava
 * da li je broj prost*/

#include <stdio.h>

int main() {
    int n, i, prost = 1; // pretpostavljamo da je broj prost

    // Unos broja
    printf("Unesite broj: ");
    scanf("%d", &n);

    // Brojevi manji od 2 nisu prosti
    if (n < 2) {
        prost = 0;
    } else {
        // Provjera djeljivosti
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                prost = 0; // Broj nije prost
                break;
            }
        }
    }

    // Ispis rezultata
    if (prost)
        printf("Broj %d je prost.\n", n);
    else
        printf("Broj %d nije prost.\n", n);

    return 0;
}
