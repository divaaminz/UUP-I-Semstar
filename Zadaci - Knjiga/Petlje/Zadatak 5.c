/*Nacrtati trougao sastavljen od zvjezdica kao na primjeru čije
su katete dugačke po n zvjezdica (broj n unosi korisnik).
Za n=5 izgledao bi ovako:

*
**
***
****
*****
*/
#include <stdio.h>

int main(){
    int a,i,j;

    printf("Unesite neki cijeli broj a: ");
    scanf("%d",&a);

    for(i=0;i<a;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}