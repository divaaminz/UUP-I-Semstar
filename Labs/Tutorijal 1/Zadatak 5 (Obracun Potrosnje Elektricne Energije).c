/*
 Zadatak 5: Obračun potrošnje električne energije
 Program izračunava ukupnu potrošnju, iznos računa i udio tarifa.
 */
#include <stdio.h>
#include <math.h>

int main() {
    double VT, MT, cijena_VT, cijena_MT;
    printf("Unesite potrosnju (VT MT) i cijene po kWh (cijena_VT cijena_MT): ");
    scanf("%lf %lf %lf %lf", &VT, &MT, &cijena_VT, &cijena_MT);
    
    double ukupna_potrosnja = VT + MT;
    double iznos_racuna = (VT * cijena_VT) + (MT * cijena_MT);
    double udio_VT = (VT / ukupna_potrosnja) * 100;
    double udio_MT = (MT / ukupna_potrosnja) * 100;
    
    printf("Ukupna potrosnja je %.2f kWh.\n", ukupna_potrosnja);
    printf("Udio velike tarife u ukupnoj potrosnji je %.0f%%.\n", udio_VT);
    printf("Udio male tarife u ukupnoj potrosnji je %.0f%%.\n", udio_MT);
    printf("Iznos racuna je %.2f KM.\n", iznos_racuna);
    
    return 0;
}
