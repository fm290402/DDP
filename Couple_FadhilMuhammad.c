/*Program : Couple.c
* Deskripsi : program untuk memeriksa apakah huruf yang berpasangan ada di dalam array atau tidak.
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
    char a,b, x[10];
    strcpy(x,"jtkpolban");

    scanf("%c %c", &b, &a);

    int i = 0;
    
    for(;i<strlen(x);i++){
        if(tolower(a)==x[i]){
            if(tolower(b)==x[i+1]){
                printf("ada\n"); return 0;
            }
        }
    }
    printf("tidak ada\n");

    return 0;
}