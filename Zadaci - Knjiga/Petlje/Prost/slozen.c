/*Provjer da li je broj prost ili slozen*/
#include <stdio.h>

int main(){
    int i,n;
    int prost=1;
    printf("Unesite neki broj n: ");
    scanf("%d",&n);

    for(i=2;i<n;i++){
        if(n%i==0){
            prost=0;
            break;
        }
    }
   if(prost){
        printf("Prost");
    } else{
        printf("Slozen");
    }
    return 0;
}