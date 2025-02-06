/*Napisati program koji omogućuje korisniku da unese neograničeno
velik niz cijelih brojeva koji se završavaju nulom, a zatim na ekranu ispisuje
sumu tih brojeva.*/

#include <stdio.h>

int main(){
    int a, suma=0;

    do{
        printf("Unesite cijeli broj: ");
        scanf("%d", &a);
        suma+=a;
    } while(a!=0);
    printf("Suma je %d",suma);
    return 0;
}