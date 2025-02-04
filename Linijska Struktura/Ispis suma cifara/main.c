/*Napisati program koji ucitava dvocifreni broj i ispisuje sumu cifara*/
#include <stdio.h>

int main(){
    int a;
    printf("Unesit neki dvocifreni broj: ");
    scanf("%d", &a);
    int jedinica, desetica,suma;
    jedinica=a%10;
    desetica=a/10;
    suma=jedinica+desetica;

    printf("Suma cifara dvocifrenog broja: %d",suma);
    return 0;
}