//Definirajte varijablu tipa cijeli broj koja se zove n (int n). Dodijelite vrijednost ovoj varijabli i ispisite svaki cetvrti broj od n do 1.

#include <stdio.h>

int main (){
    int n=500;

    while (n>=1){
        printf("%d\n",n);
        n=n-4;
    }

    return 0;
}