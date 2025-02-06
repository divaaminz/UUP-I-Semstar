/*10.2.. Učitati članove i naći najveći član niza.
*/

#include <stdio.h>
#define sada 100
int main(){
    int a,x,i,max=0, niz[sada];

    printf("Unesi velicinu niza: ");
    scanf("%d",&a);

    printf("Unesi elemente niza: ");
    for (i=0;i<a;i++){
        scanf("%d",&niz[i]);
    }

    for(i=0;i<a;i++){
        if(max<niz[i])
        max=niz[i];
    }
    printf("Najveci clan niza je; %d", max);
    return 0;
}