/*105.. Učitati niz X od n članova. Naći maksimum poređenjem nultog člana niza.*/

#include <stdio.h>
#define sada 100
int main(){
    int a,x,i,max=0, niz[sada],temp;

    printf("Unesi velicinu niza: ");
    scanf("%d",&a);

    printf("Unesi elemente niza: ");
    for (i=0;i<a;i++){
        scanf("%d",&niz[i]);
    }

    for(i=0;i<a;i++){
        if(niz[0]<niz[i]){
        temp=niz[i];
        max=niz[0];
        niz[0]=temp;
        }

    }
    printf("Novi niz je; ");
    for(i=0;i<a;i++){
        printf("%d ",niz[i]);
    }
    return 0;
}