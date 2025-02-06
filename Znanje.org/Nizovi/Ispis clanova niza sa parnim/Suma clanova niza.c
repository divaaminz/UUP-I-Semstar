/*10.1.. Učitati članove niza. Izračunati i ispisati sumu članova niza.

11. Učitati članove niza. Izračunati i ispisati sumu članova niza sa parnim indeksom.

*/

/*10.2. Učitati članove niza. Ispisati članove niza u obrnutom redoslijedu.

*/

#include <stdio.h>
#define max 100

int main(){
    int a, niz[max], i,suma=0, suma_p=0, suma_n=0;

    printf("Unesite velicinu niza: ");
    scanf("%d", &a);
    
    printf("Unesite elemente niza: ");
    for(i=1;i<=a;i++){
        scanf("%d",&niz[i]);
    }

    for(i=1;i<=a;i++){
        suma+=niz[i];
    }
    printf("Ispis sume clanova niza %d ", suma);

    //Ispis sume clanova sa parnim indeksom
    for(i=1;i<=a;i++){
    if(i%2==0)  
    suma_p=suma_p+niz[i];
    }
    printf("Ispis sume clanova niza %d ", suma_p);

    //Ispis sume clanova sa neparnim indeksom
    for(i=1;i<=a;i++){
    if(i%2!=0)  
    suma_n=suma_n+niz[i];
    }
    printf("Ispis sume clanova niza %d ", suma_n);
}