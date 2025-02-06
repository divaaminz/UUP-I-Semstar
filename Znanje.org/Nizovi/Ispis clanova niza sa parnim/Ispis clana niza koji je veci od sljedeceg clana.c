/*Učitati članove niza. Ispisati: članove niza koji su veći od slijedećeg člana.

*/

#include <stdio.h>
#define max 100

int main(){
    int a,niz[max],i;

    printf("Unesite velicinu niza: ");
    scanf("%d",&a);

    for(i=0;i<a;i++){
        printf("%d-ti clan niza: ",i+1);
        scanf("%d",&niz[i]);
    }

    printf("Ispis clana niza koji je veci od narednog: ");
    for(i=0;i<a-1;i++){
        if(niz[i]>niz[i+1]){
            printf("%d, ", niz[i]);
        }
    }
    return 0;
}