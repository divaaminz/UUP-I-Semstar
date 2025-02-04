/*Ucitavanje tri broja i ispis u obrnutom redoslijedu te ispis sume*/
#include <stdio.h>

int main(){
    int a,b,c,x;

    printf("Unesite 3 broja: ");
    scanf("%d %d %d", &a,&b,&c);

    printf("Ispis u obrnutom redoslijedu %d %d %d, suma %d",c,b,a,a+b+c);
    return 0;
}