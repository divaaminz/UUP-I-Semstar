/*11.1. Učitati i ispisati članove niza.*/

#include <stdio.h>
#define max 100

int main(){
    int niz[max];
    int a,i;
    printf("Unesite broj elemenata niza: ");
    scanf("%d",&a);

    for(i=0;i<a;i++){
        printf("%d-ti clan niza: ", i+1);
        scanf("%d",&niz[i]);
    }

    for(i=0;i<a;i++){
        printf("%d",niz[i]);
    }
    return 0;
}