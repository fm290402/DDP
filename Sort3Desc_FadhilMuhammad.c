/*Program : Sort3Desc.c
* Deskripsi : Program mengurutkan tiga data integer yang dimasukkan secara descending
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
    int i,j,angka[3];

    // program
    for (i=0;i<3;i++){
        scanf("%d", &angka[i]);
    }

    for (i=2;i>0;--i){
        for (j=0;j<i;j++){
            if (angka[i]>angka[j]){
                    angka[i] += angka[j];
                    angka[j]=angka[i]-angka[j];
                    angka[i]=angka[i]-angka[j];
            }
        }
    }

    for (i=0;i<2;i++){
        printf("%d ", angka[i]);
    }
    printf("%d\n", angka[2]);

    return 0;
}