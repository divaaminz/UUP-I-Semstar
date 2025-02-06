/*Napraviti program koji na ekranu iscrtava trougao sastavljen
od zvjezdica kao na primjeru, čije su katete dugačke po n zvjezdica (broj n
unosi korisnik).
Za n=5
*****
 ****
  ***
   **
    *
*/

#include <stdio.h>

int main(){
    int x, i, j;

    printf("Unesite neki cijeli broj x: ");
    scanf("%d",&x);

    for(i=0;i<x;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(j=0;j<x-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}