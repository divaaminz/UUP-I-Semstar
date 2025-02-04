/*Napisati program koji ucitava koeficijente a, b i c realnog 
tipa. Ti koeficijenti definiraju funkciju f(x):  
f(x)=ax2+bx+c  
Program zatim provjerava da li su ti keficijenti u rasponu -10 do 
10. Ako nisu, program ispisuje poruku:  
Koeficijenti a, b i c nisu u zadanom rasponu.  
Ako koeficijenti a, b i c jesu u zadanom rasponu, program kao 
izlaz daje vrijednost prve derivacije u tacki x. Tacka x se 
takodjer unosi sa standardnog ulaza.  
Na primjer, ako je ulaz a=1, b=2, c=1, x=1 program kao izlaz 
daje: Prva derivacija u tacki x=1 je 4. */
#include <stdio.h>

int main(){
    //Program ucitava koeficijente realnog tipa
    double a,b,c;
    int x;
    printf("Unesi koeficijenta a,b i c koji definiraju funkciju f(x)=ax^2+bx+c:");
    scanf("%f %f %f", &a,&b,&c);

    if(((a<10) && (a>-10)&& ((b<10) && (b>-10))&& ((c<10) && (c>-10)))){
        printf("Unesi tacku x:");
        scanf("%d",&x);
        float derivacija=2*a*x+b;
        printf("Prva derivacija u tacki x=%d je %0.f", x, derivacija);

    } else{
        printf("Koeficijenti a,b,c nisu u zadanom rasponu!");
    }
    return 0;

}