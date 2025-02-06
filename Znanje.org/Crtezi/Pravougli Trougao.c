/*
*
**
***
****
*****
*/

#include <stdio.h>

int main(){
    int a,i,j;

    printf("Unesite neki cijeli broj: ");
    scanf("%d",&a);

    printf("Ispis uzeg trougla: \n");
    for(i=0; i<a;i++){
        for(j=0;j<a;j++){
            if(j>i){
                printf(" ");
            }
            if(j<=i){
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\nIspis sireg trougla: \n");
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            if(j>i){
                printf(" ");
            }
            if(j<=i){
                printf(" * ");
            }
        }
        printf("\n");
    }
    return 0;
}

