/*Program : BiayaSetelahBunga.c
* Deskripsi : Menentukan Biaya yang harus dibayar
* Nama : Fadhil Muhammad 
* tanggal/ versi : 08 - 12 - 2020/ 1.0
* Compiler : C
*/

#include<stdio.h>


int main(){
    /* Kamus Data */
    float totalBiaya,bunga;
    
    /* Algoritma */
    scanf("%f %f", &totalBiaya, &bunga);
    
    totalBiaya = totalBiaya + (totalBiaya*bunga/100);
    
    printf("%.2f", totalBiaya);
    return 0;
}