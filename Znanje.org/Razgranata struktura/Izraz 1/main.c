/*Učitati broj ispisati znak broja prema izrazu:
z=1, x>=0 || z=0,x<0*/
#include <stdio.h>

int main(){
    int z,x;
    printf("Unesite neki broj x: ");
    scanf("%d", &x);
    if(x>=0){
        printf("Za x=%d, z=1", x);
    } else{
        printf("Za x=%d, z=0", x);
    }
    return 0;
}