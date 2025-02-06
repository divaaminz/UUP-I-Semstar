/*8.5.. Napisati program za ispis pravouglog trougla kao na slici sa željenim brojem redova:

Unesite broj redova: 4
....
X...
XX..
XXX.
*/

#include <stdio.h>

int main(){
    int a,i,j,b;

    printf("Unesite broj redova: ");
    scanf("%d",&a);

    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++){
            if(j>i){
                printf("X");
            }
            else {
                printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}