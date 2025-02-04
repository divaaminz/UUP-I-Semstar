/*Učitati broj ispisati znak broja prema izrazu:
z=z-1, x<3 || z=z+3*/
#include <stdio.h>

int main(){
    int z,x;
    printf("Unesite neki broj x: ");
    scanf("%d", &x);
    if(x<3){
        printf("Za x=%d, z=%d", x, x-1);
    } else{
        printf("Za x=%d, z=%d", x, x+3);
    }
    return 0;
}