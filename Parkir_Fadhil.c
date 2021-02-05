/*Program : BiayaParkir.c
* Deskripsi : Biaya Parkir
* Nama : Fadhil Muhammad
* tanggal/ versi : 08 - 12 - 2020/ 1.0
* compiler : C
*/

#include<stdio.h>

int main(){
    /* Kamus Data */
    int jeniskendaraan;
    int waktu;
    int totalbiaya;
    
    /* Algoritma */
    // input jenis kendaraan
    scanf("%d", &jeniskendaraan);
    // input lama parkir (dalam jam)
    scanf("%d", &waktu);
    
    
    switch(jeniskendaraan){
        case 1 : /* isi instruksi jika jenis kendaraan 1 */ 
        if (waktu > 1){
        	totalbiaya = (((waktu-1)*1000)+2000);
		}else{
			totalbiaya = 2000;
		}
          break;
        case 2 : /* isi instruksi jika jenis kendaraan 2 */ 
        if (waktu>1){
        	totalbiaya = (((waktu-1)*500)+1000);
		}else{
			totalbiaya = 1000;
		}
          break;
    }
    
    printf("%d", totalbiaya);
    
    return 0;
}