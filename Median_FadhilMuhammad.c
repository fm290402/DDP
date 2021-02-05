/*Program : Median.c
* Deskripsi : program untuk menentukan nilai median dari sekelompok data integer
* Nama : Fadhil Muhammad
* tanggal/ versi : 16 - januari - 2020 / 1 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>

int main(){ 
    // kamus data
    int i, j;
    scanf("%d", &j);
    float x[j];

    // program
    for (i=0;i<j;i++){
        scanf("%f", &x[i]);
    }
    if (j%2==0){
        printf("%.1f\n", (x[j/2]+x[j/2-1])/2);
    }else{
        printf("%.1f\n", x[j/2]);
    }
    

    return 0;
}