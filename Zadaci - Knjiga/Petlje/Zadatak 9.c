/*Napisati program koji izračunava arctanh x – hiperbolički
arkus tangens nekog broja x – koristeći sljedeću aproksimativnu formulu:

arctanhx=x+(x^3)/3+(x^5)/5...*/

#include <stdio.h>
#include <math.h>

int main(){
    //U zadatku se trazi suma, jer cemo na taj nacin ispisati aproksimativnu formulu

    int n,i;
    double suma=0,x, clan;

    printf("Unesite neku vrijednost x: ");
    scanf("%lf",&x);
    do{
    printf("Sada unesite neki prirodan broj n: ");
    scanf("%d",&n);
    }while(n<=0);

    for(i=1;i<2*n;i+=2){
        clan=pow(x,i)/i;
        suma+=clan;
    }
    printf("Suma iznosi: %g", suma);
    return 0;


}