/*Napraviti program koji ucitava koordinate dvije tacke u 
trodimenzionalnom prostoru:  
Tacke t1 i t2 su definirane kao trojke:  
 - t1=(x1, y1, z1) ,  
 - t2 =(x2, y2, z2).  
Kao izlaz program daje udaljenost izmedju tih tacki.  
NAPOMENA: Za drugi korijen koristiti funkciju sqrt() koja je 
definirana u datoteci math.h. Na primjer, naredba a=sqrt(9); ce 
izracunati drugi korijen iz 9 i pridružiti izracunatu vrijednost 
varijabli a.*/

#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,x,y,z;
    //Unos tacaka t1 i t2 od strane korisnika
    printf("Unesite koordinate tacke t1(x,y,z): ");
    scanf("%lf %lf %lf", &x,&y,&z);
    printf("Unesite koodrinate tacke t2(x,y,z): ");
    scanf("%lf %lf %lf", &a,&b,&c);

    //Udaljenost izmedju tacaka racuna se formulom 
    float udaljenost=(x-a)*(x-a)+(y-b)*(y-b)+(z-c)*(z-c);

    printf("Udaljenost izmedju tacaka t1 i t2 iznosi: %lf", sqrt(udaljenost));
    return 0;
}