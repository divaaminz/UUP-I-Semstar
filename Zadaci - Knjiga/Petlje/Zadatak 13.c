/*Napisati program koji izračunava sumu cifara broja.*/

#include <stdio.h>
int main(){
    int broj, suma=0, i, br;

    printf("Unesite neki cijeli broj: ");
    scanf("%d",&broj);

    if(broj<0){
        broj=-broj;
    }

    while(broj>0){
        suma+=broj%10;
        broj=broj/10;
    }

    printf("Suma brojeva je: %d",suma);
    return 0;

    
}