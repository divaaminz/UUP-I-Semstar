/*Definirajte varijablu tipa Integer pod nazivom n. Dodijelite vrijednost varijabli.*/

#include <stdio.h>

int main(){
    int n=169;
    if (n%13==0){
    printf("Data vrijednost je djeljiva sa trinaest.");
    } else {
    printf("Data vrijednost nije djeljiva sa trinaest.");
    }

    return 0;
}