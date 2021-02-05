/*Program : MencariHuruf.c
* Deskripsi : Mendeteksi apakah ada huruf yang diinputkan di dalam array
* Nama : Fadhil Muhammad
* tanggal/ versi : 14 - 12 - 2020/ 1.2
* compiler : C
*/

#include<stdio.h>

int main(){
    /* kamus data */
    char x[10] = "JTKPolban",y;
    int i, cek;
    

    /* algoritma */
    scanf("%c",&y);
    
    for (i=0;i<10;i++){
        if (y == x[i]){
            cek = 1;
        }
    }
    if(cek == 1){
        printf("ada");
    }else{
        printf("tidak ada");
    }
    return 0;
}