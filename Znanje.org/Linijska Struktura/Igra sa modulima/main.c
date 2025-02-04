/*Napisati program za izracunavanje a MOD2 , A NOD -2, -A MOD 2, -A MOD -2*/
#include <stdio.h>
#include <math.h>

int main(){
    int a;
    printf("Unesite neki broj a: ");
    scanf("%d", &a);
    printf("a MOD2 = %0.2f , A NOD -2 = %0.2f, -A MOD 2 = %0.2f, -A MOD -2 = %0.2f", pow(a,2), pow(a,-2), pow(-a,2), pow(-a,-2));
    return 0;
}