/*Napisati program koji ce izracunati presjek skupova S1 i S2. 
Skupovi S1 i S2 definirani su intervalima realnih brojeva:  
S1=[A, B]  
S2=[C, D].  
Na primjer, za slijedeci ulaz:  A=3, B=9, C=7, D=11  
program kao izlaz treba dati:  
Rezultantni interval je REZ=[7, 9]. */

#include <stdio.h>

//Presjek predstavlja brojeve koji pripadaju i skupu 1 i skupu 2
int main(){
int a,b,c,d, rezultat, temp;
//Unos skupova
printf("Unesite interval skupa S1[A,B]: ");
scanf("%d %d", &a,&b);
printf("Unesite interval skupa S2[C,D]: ");
scanf("%d %d", &c,&d);
int pocetak, kraj;

if (a>c){
    pocetak=a;
} else{
    pocetak=c;
}

if(b<d){
    kraj=b;
} else{
    pocetak=d;
}
if(b<c || a>d){
    printf("Nema presjeka!");
}
//Ispis krajnog intervala
printf("Rezultantni interval REZ(%d,%d)", pocetak, kraj);
return 0;
}