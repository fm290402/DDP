/*Program : Limas.c
* Deskripsi : Menghitung Volume limas
* Nama : Fadhil Muhammad
* tanggal/ versi : 08 - 12 -2020/ 1.0
* compiler : C
*/

#include<stdio.h>


int main(){
    /* Kamus Data */
    float volume;
    float panjang, lebar, tinggi;
    
    /* Algoritma */
    scanf("%f %f %f", &panjang, &lebar, &tinggi);
   
    volume = (panjang * lebar * tinggi) * 1/3;
    
    printf("%f", volume);
    return 0;
}