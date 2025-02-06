/*Napisati program koji određuje najveću cifru broja.*/

#include <stdio.h>
int main(){
    int x,c,max=0;
    printf("Unesite broj: ");
    scanf("%d",&x);

    while(x!=0){
        c=x%10;
        if(c>max)max=c;
        x=x/10;
    }
    printf("Najveca cifra je: %d",max);
    return 0;
}