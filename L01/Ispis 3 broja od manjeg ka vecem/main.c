/* Napisati program koji ucitava tri cijela broja iz intervala 
od 50 do 200. Ako svi uneseni brojevi nisu iz tog intervala, 
program treba ispisati poruku "Svi brojevi nisu iz intervala 50 
do 200” i završiti program. Ako su brojevi unutar tog intervala 
program treba ispisati ucitane brojeve po velicini od najmanjeg 
prema najvecem. */

#include <stdio.h>

int main(){
    int a,b,c;
    //Cijela broja, koristimo int

    //Unos
    printf("Unesi 3 cijela broja koji se nalaze u intervalu [50,200]: ");
    scanf("%d %d %d", &a, &b, &c);
    if((a>50) && (a<200) && ((b>50)&& (b<200)) && ((c>50)&& (c<200))){
        if(a>b && a>c){
            if(b>c){
                printf(a,b,c);
            } else{
                printf(a,c,b);
            }
        } else if(b>a && b>c){
            if(a>c){
                printf(b>a>c);
            } else{
                printf(b>c>a);
            }
        } else if(c>a && c>b){
            if(a>b){
                printf(c,a,b);
            } else{
                printf(c,b,a);
            }
        }
    } else{
        printf("Nisu svi brojevi unutar zadatog intervala!");
        return 1;
    }
}