/*Program : CountTriples.c
* Deskripsi : program untuk menghitung jumlah kemunculan tiga buah huruf berpasangan
* Nama : Fadhil Muhammad
* tanggal/ versi : / 1 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>

int main(){ 
    char kata[41], a, b, c, same=0;
    fgets(kata, sizeof(kata), stdin);
    scanf("%c %c %c", &a, &b, &c);

    int i=0;
    for(;i<strlen(kata)-1;i++){
        if(tolower(a)==tolower(kata[i])){
            if(tolower(b)==tolower(kata[i+1])){
                if(tolower(c)==tolower(kata[i+2])){
                    same++;
                }
            }
        }
    }
    printf("%d\n", same);

    return 0;
}