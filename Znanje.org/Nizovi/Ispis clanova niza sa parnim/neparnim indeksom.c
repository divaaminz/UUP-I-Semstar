/*Učitati članove niza.  Ispisati parne članove niza.*/
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

    printf("\nIspis elemenata sa parnim indeksom: ");
    for(i=0;i<a;i++){
        if(niz[i]%2==0){
            printf("%d ",niz[i]);
        }
    }

        printf("\nIspis elemenata sa neparnim indeksom: ");
    for(i=0;i<a;i++){
        if(niz[i]%2!=0){
            printf("%d ",niz[i]);
        }
    }
            printf("\nIspis elemenata sa indeksom koji nije djeljiv sa 4: ");
    for(i=0;i<a;i++){
        if(niz[i]%4!=0){
            printf("%d ",niz[i]);
        }
    }

}