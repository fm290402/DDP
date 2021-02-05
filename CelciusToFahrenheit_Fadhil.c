/*Program : CelciusToFahrenheit.c
* Deskripsi : Mengonversi suhu dalam celcius ke fahrenheit
* Nama : Fadhil Muhammad
* tanggal/ versi :08 - 12 - 2020/ 1.0
* Catatan : F = C x 1,8 + 32
*/

#include<stdio.h>
#include<math.h>

int main(){
    /* Kamus Data */
    float celsius, fahrenheit;
    /* Algoritma */
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 18/10) + 32;

    printf("%.2f", fahrenheit);

    return 0;
}