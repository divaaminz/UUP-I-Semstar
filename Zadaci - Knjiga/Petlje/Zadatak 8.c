/*Napisati program koji omogućuje unos pozitivnog cijelog broja
n>4 (zabraniti unos brojeva manjih ili jednakih broju 4), a zatim na ekranu
ispisuje veliko štampano slovo N sastavljeno od znakova * čije je širina i
visina n znakova. Primjeri za n=5 i n=6:

*   *
**  *
* * *
*  **
*   *
*/

#include <stdio.h>

int main(){
    int n, i,j;

    //Ogranicavamo unos broja do while petljom
    do{
        printf("Unesite neki cijeli broj>4: ");
        scanf("%d",&n);
    } while(n<=4);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==0 || j==n-1 || j==i){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}