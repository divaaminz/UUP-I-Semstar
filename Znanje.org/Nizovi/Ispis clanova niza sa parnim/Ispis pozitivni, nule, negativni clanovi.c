/*10.2. Učitati članove niza. Ispisati: pozitivne, nule pa negativne članove niza.
*/

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

    printf("Ispis niza u formatu (+,0,-): ");
    for(i=0;i<a;i++){
        if(niz[i]>0){
            printf("%d, ", niz[i]);
        }
    }
    for(i=0;i<a;i++){
        if(niz[i]==0){
            printf("%d, ",niz[i]);
        }
    }
    for(i=0;i<a;i++){
            if(niz[i]<0){
            printf("%d, ",niz[i]);
        }
    }
    return 0;
}