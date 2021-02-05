/*Program : right.c
* Deskripsi : Menampilkan N buah karakter terkanan.
* Nama : Fadhil Muhammad
* tanggal/ versi : 10 - Januari - 2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>

int main(){ 
    int i, n;
    char kata[32];

    fgets(kata, sizeof(kata), stdin);
    scanf("%d", &n);

    for (i = strlen(kata)-1-n; i<strlen(kata)-1;i++){
        printf("%c", kata[i]);
    }
    printf("\n");

    return 0;
}