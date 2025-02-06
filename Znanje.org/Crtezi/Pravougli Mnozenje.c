/*Unesite broj redova: 7
 2
 2  4
 2  4  6
 2  4  6  8
 2  4  6  8  10
 2  4  6  8  10  12
 2  4  6  8  10  12  14*/
#include <stdio.h>

int main(){
    int a,i,j,b;

    printf("Unesite broj redova: ");
    scanf("%d",&a);

    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            if(j==i){
                printf(" %d ", 2*i);
            }
            else if(j<=i){
                printf(" %d ", 2*j);
            }
        }
        printf("\n");
    }
    return 0;

}