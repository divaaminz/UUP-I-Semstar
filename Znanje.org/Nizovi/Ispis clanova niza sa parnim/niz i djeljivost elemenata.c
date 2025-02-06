/*11. Učitati članove niza. Ispisati članove niza sa parnom vrijednosti (djeljive sa 2).
djeljive sa 3
*/

#include <stdio.h>
#define max 100

int main(){
    int i, niz[max],a;
    printf("Unesite duzinu niza: ");
    scanf("%d",&a);

    //Unos niza
    for(i=0;i<a;i++){
        printf("%-ti clan niza: ",i+1);
        scanf("%d", &niz[i]);
    }

    //Provjeravanje clanova niza i ispis parnih clanova
    printf("Elementi niza sa parnom vrijednoscu: ");
    for(i=0;i<a;i++){
        if(niz[i]%2==0){
            printf("%d, ",niz[i]);
        }
    }

    //Ispis elemenata koji nisu djeljivi sa 3
    printf("Elementi niza koji nisu djeljivi sa 3: ");
    for(i=0;i<a;i++){
        if(niz[i]%3!=0){
            printf("%d, ", niz[i]);
        }
    }
    return 0;

}