/*Program za sabiranje 2 broja pomocu makro naredbi*/
#include <stdio.h>
#define SABERI(a,b) ((a)+(b))

int main() {
	int a,b;
    printf("Unesite dva broja: ");
    scanf("%d %d",&a,&b);

    printf("Zbir %d i %d je: %d\n",a,b, SABERI(a,b));
    return 0;
}
