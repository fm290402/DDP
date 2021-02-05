/*Program : GanjilGenap.c
* Deskripsi : Mendeteksi Ganji, Genap dan nol Pada Input
* Nama : Fadhil Muhammad
* tanggal/ versi : 09 - 12 - 2020/ 1.0
* compiler : C
*/

#include<stdio.h>


int main(){
    /* Kamus Data */
    int angka;
    
    /* Algoritma */
    scanf("%d", &angka);
    if(angka == 0){
        printf("nol");
    }else if(angka%2!=0 ){
        printf("ganjil");
        
    }   else{
            printf("genap");
    }
    
    
    return 0;
}