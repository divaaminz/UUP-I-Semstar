/*
Unesite broj redova: 7

 5
 7  15
 10  20  30
 12  25  37  50
 15  30  45  60  75
 17  35  52  70  87  105*/
#include <stdio.h>

int main(){
    int a,i,j,b;

    printf("Unesite broj redova: ");
    scanf("%d",&a);

    for(i=1;i<=a;i++){
        for(j=1;j<i;j++){
            if(j==i){
                printf(" %d ", 5*i*i);
            }
            else if(j==i){
                printf(" %d ", 5*j*i);
            }
            else if (j<i) {
                printf(" %d ", (5*j*i)/2);
            }
        }
        printf("\n");
    }
    return 0;

}