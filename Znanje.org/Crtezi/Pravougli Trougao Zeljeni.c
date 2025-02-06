#include <stdio.h>

int main(){
    int a,i,j,b;

    printf("Unesite broj redova: ");
    scanf("%d",&a);
    printf("Unesite zeljeni broj: ");
    scanf("%d",&b);
    
    for(i=0;i<a;i++){
        for(j=0;j<i;j++){
            if(j==0){
                printf("X");
            }
            else {
                printf(" %d X", b);
            }
        }
        printf("\n");
    }
    return 0;
}