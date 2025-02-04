/*Program za pretvaranje galona u litre*/
#include <stdio.h>

int main(){
    float a;
    printf("Unesite kolicinu tekucine u galonima: ");
    scanf("%f", &a);

    printf("Unesena kolicina u litrima: %0.2f L", a/4.54);
    return 0;
}