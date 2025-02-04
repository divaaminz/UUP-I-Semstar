/*Napisati program za racunanje godina starosti*/
#include <stdio.h>
#define GODINA 2025

int main(){
    int a;
    printf("Unesite godinu rodjenja: ");
    scanf("%d", &a);

    printf("Imas %d godina ove godine (2025).", GODINA-a);
    return 0;
}