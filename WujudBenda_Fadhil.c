/*Program : WujudBenda.c
* Deskripsi : menyatakan suatu benda apakah cari atau non cair
* Nama : Fadhil Muhammad
* tanggal/ versi : 08 - 12 - 2020 / 1.0
* compiler : C
*/

#include<stdio.h>


int main(){
    /* Kamus Data */
    float suhu;
    
    /* Algoritma */
    scanf("%f", &suhu);
    
    if(suhu >= 0 && suhu <= 100){
        printf("berwujud cair");
	}else{
        printf("berwujud non cair");
    }
    
    return 0;
}