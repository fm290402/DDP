/*Program : LuasLingkaran.c
* Deskripsi : Menghitung Luas Lingkaran dari Jari-Jarinya
* Nama : Fadhil Muhammad
* tanggal/ versi : 08 - 12 - 2020/ 1.0
* Compiler : C
*/

#include<stdio.h>
#include<math.h>

int main(){
    /* Kamus Data */
    float luas; // variable luas lingkaran
    float r;    // variable jari-jari lingkaran
    
    
    /* Algoritma */
    float pi=3.14;
    scanf("%f", &r);
    
    luas = ((pi*r)*r);
    
    printf("%.2f", luas);
    return 0;
}