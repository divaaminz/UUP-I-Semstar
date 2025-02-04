/*Učitati broj ispisati znak broja prema izrazu:
z=x+y, x-y<2 || z=x-y*/
#include <stdio.h>

int main(){
    int z,x,y;
    printf("Unesite neki broj x i y: ");
    scanf("%d %d", &x, &y);
    if(x-y<2){
        printf("Za x=%d y=%d, z=%d", x, y, x+y);
    } else{
        printf("Za x=%d y=%d, z=%d", x, y, x-y);
    }
    return 0;
}