/*Program : GanjilGenap.c
* Deskripsi : Mendeteksi Ganji dan Genap Pada Input
* Nama : Fadhil Muhammad
* tanggal/ versi : 08 - 12 - 2020/ 1.0
* compiler : C
*/

#include<stdio.h>


int main(){
    /* Kamus Data */
    int angka;
    
    /* Algoritma */
    scanf("%d", &angka);
    if(angka%2!=0){
        printf("ganjil");    
    }else{
        printf("genap");
    }
    
    return 0;
}