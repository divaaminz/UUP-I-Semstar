/*
 Zadatak 4: Površina i zapremina geometrijskog tijela
 Program računa površinu i zapreminu tijela prema zadanim dimenzijama.
 Za π koristimo simboličku konstantu.
 */
#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

int main()
{
    double r, h;
    printf("Unesite poluprecnik osnove (r) i visinu tijela (h): ");
    scanf("%lf %lf", &r, &h);

    double povrsina = 2 * PI * r * (r + h);
    double zapremina = PI * r * r * h;

    printf("Povrsina tijela je %.3f cm2.\n", povrsina);
    printf("Zapremina tijela je %.3f cm3.\n", zapremina);

    return 0;
}
