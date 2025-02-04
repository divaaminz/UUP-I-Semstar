/*Napravite C-program koji ucitava potrošnju elektricne 
energije u KWh (velika tarifa(VT) i mala tarifa(MT)) i 
pripadajuce cijene po KWh (cijena za malu tarifu i cijena za 
veliku tarifu).  
Kao izlaz program daje:  
 - ukupnu potrošnju u KWh;  
 - novcani iznos racuna;  
 - udio velike tarife i male tarife u ukupnoj potrošnji.  
Na primjer, izlaz iz programa treba biti sljedeceg formata:  
Ukupna potrosnja je 234.25 KWh.  
Udio velike tarife u ukupnoj potrosnji je 25 %.  
Udio male tarife u ukupnoj potrosnji je 75%.  
Iznos racuna je 25.45 KM.  */

#include <stdio.h>

int main(){
    float VT, MT, CijenaVT, CijenaMT, UkupnaPotrosnja, UkupniIznos, UdioVT, UdioMT;
    //Prvo unosimo potrosnju energije
    printf("Unesite potrosnju energije (Kwh) po Velikoj Tarifi: ");
    scanf("%lf",&VT);
    printf("Unesite potrosnju energije (Kwh) po Maloj Tarifi: ");
    scanf("%lf",&MT);
    printf("Unesite cijenu (KM) potrosnju energije po Velikoj Tarifi: ");
    scanf("%lf",&CijenaVT);       
    printf("Unesite cijenu (KM) potrosnju energije po Maloj Tarifi: ");
    scanf("%lf",&CijenaMT);  

    UkupnaPotrosnja=VT+MT;
    printf("Ukupna potrosnja je %.2f KWh\n", UkupnaPotrosnja);
    UdioMT=(MT/UkupnaPotrosnja)*100; 
    printf("Udio male tarife u ukupnoj potrosnji je %.2f\n", UdioMT);
    UdioVT=(VT/UkupnaPotrosnja)*100; 
    printf("Udio velike tarife u ukupnoj potrosnji je %.2f\n", UdioVT);
    UkupniIznos=MT*CijenaMT+VT*CijenaVT;
    printf("Iznos racuna je %.2f KM.",UkupniIznos);
    return 0;

}