/*
*
* I *
* I * I * */

#include <stdio.h>

int main(){
    int a,i,j;

    printf("Unesite cijeli broj: ");
    scanf("%d",&a);

    //ispis kao u zbirci
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            if(j==i){
                printf("X");
            }else{
                printf(" I X");
            }
        }
        printf("\n");
    }
   /* for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            if(j>i){
                printf(" ");
            }
            if(j<=i && j%2!=0){
                printf(" I ");
            }
            if(j%2==0 && j<=i){
                printf(" X ");
            }
        }
        printf("\n");
    }*/
    return 0;
}