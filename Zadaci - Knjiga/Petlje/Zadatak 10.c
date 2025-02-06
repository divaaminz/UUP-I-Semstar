/*Napisati program koji izračunava broj π na k tačnih decimala,
po sljedećoj aproksimativnoj formuli:
pi=4*(1-1/3+1/5-1/7+1/9...)*/

#include <stdio.h>
#include <math.h>

int main(){
    int k, i=1,predznak=1;
    double suma=0,clan,limit;
    do{
        printf("Unesite broj decimala: ");
        scanf("%d",&k);
    } while(k<=0 || k>7);
    limit=pow(10,-k);
    do{
        clan=(double)predznak/i;
        predznak=-predznak;
        i+=2;
        suma+=clan;
    } while (clan>=limit);
    suma*=4;
    printf("Suma iznosi %g",suma);
    return 0;
    
}