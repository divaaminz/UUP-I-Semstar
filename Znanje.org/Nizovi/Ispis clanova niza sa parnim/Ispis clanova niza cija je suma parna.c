/*11. Učitati članove niza. Ispisati: susjedne članove niza čija je suma parna.

*/

/*Učitati članove niza. Ispisati: članove niza koji su veći od slijedećeg člana.

*/

#include <stdio.h>
#define max 100

int main(){
    int a,niz[max],i,suma=0;

    printf("Unesite velicinu niza: ");
    scanf("%d",&a);

    for(i=0;i<a;i++){
        printf("%d-ti clan niza: ",i+1);
        scanf("%d",&niz[i]);
    }

    printf("Ispis clana niza cija je suma susjednih clanova parna: ");
    for(i=0;i<a-1;i++){
        if((niz[i-1]+niz[i+1])%2==0){
            printf("%d, ", niz[i]);
        }
    }
    return 0;
}