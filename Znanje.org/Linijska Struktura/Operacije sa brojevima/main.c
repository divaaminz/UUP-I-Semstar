/*Izracunati aritmeticku sredinu*/
#include <stdio.h>

int main(){
    int a,b;
    printf("Unesite dva broja: ");
    scanf("%d %d", &a,&b);

    printf("Aritmeticka sredina: %.2f",(a+b)/2.0);
    return 0;
}