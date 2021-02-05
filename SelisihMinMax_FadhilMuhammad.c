/*Program : SelisihMinMax.c
* Deskripsi : Program untuk mencari selisih dari nilai terbesar dan terkecil dari array 1 dimensi
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
    int i,j,b,angka[10];

    // program
    scanf("%d", &j);b=j;
    for (i=0;i<9;i++){
        scanf("%d", &angka[i]);
        if(j<angka[i]){
            j=angka[i];
        }else if (b>angka[i]){
            b=angka[i];
        }
    }

    printf("%d\n", j-b);
    return 0;
}