/*Program : ParkirMalamMinggu.c
* Deskripsi : Biaya Parkir Malam Minggu
* Nama : Fadhil Muhammad
* tanggal/ versi : 08 - 12 - 2020/ 1.0.1
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
        if (waktu > 5){
        	totalbiaya = (((waktu-5)*500)+1500);
		}else{
			totalbiaya = waktu*1500;
		}
        
          break;
        case 2 : /* isi instruksi jika jenis kendaraan 2 */ 
        if (waktu>5){
        	totalbiaya = (((waktu-5)*500)+1000);
		}else{
			totalbiaya = waktu*1000;
		}
        
          break;
    }
    if (waktu>8){
        printf("disegel");
    }else{
    printf("%d", totalbiaya);
    }
    return 0;
}