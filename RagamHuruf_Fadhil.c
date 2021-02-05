/*Program : Fungsi_Right.c
* Deskripsi : Menampilkan N buah karakter terkanan dari sebuah array karakter.
* Nama : Fadhil Muhammad
* tanggal/ versi : 14 - 12 - 2020/ 1.0
* compiler : C
*/

#include<stdio.h>
#include <string.h>

int main() {
    /* kamus data */
  char kalimat[27];
  int jumlah,i,cek=0,x;
    /* algoritma */

  fgets(kalimat, sizeof(kalimat), stdin);

  for (i=0;i<27;i++){
    x = i;
      while(i>0){
        if (kalimat[x] == kalimat[i-1]){
          cek = cek + 1;
        }
        --i;
      }
  }
  jumlah = strlen(kalimat)-1-cek;
  printf("%d", jumlah);

  return 0;
}