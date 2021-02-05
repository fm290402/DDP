/*Program : Reverse.c
* Deskripsi : program untuk membalik array karakter yang dimasukkan.
* Nama : Fadhil Muhammad
* tanggal/ versi : 01 - 02 - 2021 / 1 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>

int main(){ 
    char kata[12];
    fgets(kata, sizeof(kata), stdin);
    int i=strlen(kata)-2;
    for(;i>-1;--i){
        printf("%c", kata[i]);
    }

    return 0;
}