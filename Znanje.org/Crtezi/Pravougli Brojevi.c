#include <stdio.h>

int main(){
    int a,i,j,b;

    printf("Unesite broj redova: ");
    scanf("%d",&a);

    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            if(j>i){
                printf(" ");
            }
            else if(j<=i){
                printf("%d", j);
            }
        }
        printf("\n");
    }
    return 0;

}