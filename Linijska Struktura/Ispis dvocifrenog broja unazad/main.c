/*Program koji ucitava dvocifreni broj i ispisuje cifre unazad*/
#include <stdio.h>

int main(){
    int a;
    printf("Unesite dvocifreni broj a: ");
    scanf("%d", &a);
    int c,b;
    c=a%10;  //Recimo a=45,ostatak pri djeljenju 45/10=5, c=5
    b=(a/10);

    printf("%d %d", c, b);
    return 0;

}