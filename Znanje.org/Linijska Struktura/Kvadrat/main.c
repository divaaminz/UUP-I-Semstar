/*Izracunati povrsinu i obim kvadrata*/
#include <stdio.h>

int main(){
    float a;
    printf("Unesi duzinu stranice a kvadrata: ");
    scanf("%f", &a);
    printf("Povrsina kvadrata: %-.2f \nObim kvadrata: %+-.2f", a*a, 4*a);
    return 0;

}