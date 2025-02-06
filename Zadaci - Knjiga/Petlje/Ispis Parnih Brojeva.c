/*Napisati program koji omogućuje korisniku da unese cijeli
broj n, a zatim na ekranu ispisuje sve parne brojeve na intervalu [n, n2]*/

#include <stdio.h>

int main(){
    int cijeliBroj;
    int i;

    printf("Unesite cijeli broj: ");
    scanf("%d", &cijeliBroj);

    for(i=cijeliBroj;i<=cijeliBroj*cijeliBroj;i++){
        if(i%2==0){
            printf("%d\n", i);
        }
    }
    return 0;
}
