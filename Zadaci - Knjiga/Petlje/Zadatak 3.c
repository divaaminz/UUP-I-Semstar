/*Napraviti program koji omogućuje korisniku da unese prirodan
broj n, a zatim na ekranu iscrtava kvadrat ispunjen znakovima zvijezda (*)
čije su sve stranice dugačke po n zvijezda.*/

#include <stdio.h>

int main(){
    int a,i,j;

    printf("Unesite prirodan broj: ");
    scanf("%d",&a);

    for (i=0;i<a;i++){
        for(j=0;j<a;j++){
        printf("*");
        }
        printf("\n");
    }
    return 0;
}