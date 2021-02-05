/*Program : GanjilGenap.c
* Deskripsi : Mendeteksi bil kelipatan 3 dan 4.
* Nama : Fadhil Muhammad
* tanggal/ versi : 09 - 12 - 2020/ 1.0
* compiler : C
*/

#include <stdio.h>

int main(){
    // kamus data //
    int bilangan;
    int cek; // berisi 1 jika bilangan merupakan kelipatan 3 dan 4 //
            // berisi 0 jika sebaliknya
    
    /* algoritma */
    cek = 0;
    scanf ("%d", &bilangan);

    if (bilangan%3 == 0 && bilangan%4==0){
        cek = 1;
    }

    printf("%d\n",cek);

    return 0;
}