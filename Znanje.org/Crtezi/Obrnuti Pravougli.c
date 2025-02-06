/*Unesite broj redova: 10
**********
 *********
  ********
   *******
    ******
     *****
      ****
       ***
        **
         * */
#include <stdio.h>

int main(){
    int a,i,j;

    printf("Unesite broj redova: ");
    scanf("%d",&a);

    for(i=0;i<a;i++){
        for(j=1;j<=a;j++){
            if(j==i || j<i){
                printf(" ");
            }
            else if(j>i) printf("*");
        }
        printf("\n");
    }
    return 0;
}