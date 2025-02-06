/*Napraviti program koji na ekranu iscrtava šuplji kvadrat
kao na slici sastavljen od znakova tačka pri čemu je svaka stranica kvadrata
dugačka n znakova (korisnik unosi broj n sa tastature).
za n=6
******
*    *
*    *
*    *
*    *
******
*/
#include <stdio.h>

int main(){
    int n, i, j;

    printf("Unesite neki broj: ");
    scanf("%d",&n);

    //Razdvajamo problem na vise manjih segmenata
    //Ispis gornje stranice
    for(i=0;i<n;i++){
        printf("*");
    }
    

    for(i=0;i<n;i++){
        printf("*");
    }

    printf("\n");
    return 0;
}