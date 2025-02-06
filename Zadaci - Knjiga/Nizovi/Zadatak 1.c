/*Napisati program koji omogućuje korisniku da unese niz od
100 elemenata, a zatim izračunava srednju vrijednost članova niza koji su
parni brojevi.*/

#include <stdio.h>
#define max 5

int main(){
    int niz[max];
    int i, suma=0, parni_brojevi=0;
    float srednja_vrijednost;

    printf("Unos niza\n");
    for(i=0;i<max;i++){
        printf("Unesit %d-ti element niza: ", i+1);
        scanf("%d",&niz[i]);
    }

    for(i=0;i<max;i++){
        if(niz[i]%2==0){
            suma+=niz[i];
            parni_brojevi++;
        }
    }
    srednja_vrijednost= (float)suma/parni_brojevi;
    printf("Srednja vrijednost parnih brojeva je %g. ", srednja_vrijednost);
    return 0;
}