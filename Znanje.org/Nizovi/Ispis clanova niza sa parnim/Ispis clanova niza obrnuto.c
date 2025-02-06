/*10.2. Učitati članove niza. Ispisati članove niza u obrnutom redoslijedu.

*/

#include <stdio.h>
#define max 100

int main(){
    int a, niz[max], i;

    printf("Unesite velicinu niza: ");
    scanf("%d", &a);
    
    printf("Unesite elemente niza: ");
    for(i=0;i<a;i++){
        scanf("%d",&niz[i]);
    }

    printf("Ispis niza u obrnutom rasporedu: ");
    for(i=a-1; i>=0;i--){
        printf("%d ", niz[i]);
    }
}