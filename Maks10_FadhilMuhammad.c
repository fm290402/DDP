/*Program : Maks10.c
* Deskripsi : Program untuk menentukan bilangan terbesar dari sepuluh bilangan yang di inputkan.
* Nama : Fadhil Muhammad
* tanggal/ versi : 15 - januari - 2020 / 1 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>

int main(){ 
    // kamus data
    int i,j,angka[10];

    // program
    scanf("%d", &j);
    for (i=0;i<9;i++){
        scanf("%d", &angka[i]);
        if(j>angka[i]){
            j=angka[i];
        }
    }
    printf("%d\n", j);


    return 0;
}