/*Napisati program koji omogućuje korisniku da unese cijeli broj
x, a zatim provjerava da li je x stepen dvojke (takav broj da je x =2^n gdje je n neki prirodan broj) 
te ispisuje poruku JESTE ako je uslov ispunjen.*/

#include <stdio.h>
#include <math.h>

int main(){
    int x,n,i;

    printf("Unesite cijeli broj x: ");
    scanf("%d",&x);

    for(i=1;i<=x;i+=2){
        if(i==x) printf("JESTE");
    }
    return 0;

}