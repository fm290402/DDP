/*Program : Strcmp.c
* Deskripsi : program untuk membandingkan dua buah kata pada array karakter dengan maksimal masing-masing berjumlah 10 elemen.
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
    char kata1[11], kata2[11], buffer[11];
    scanf("%s", buffer);strcpy(kata1, buffer);
    scanf("%s", buffer);strcpy(kata2, buffer);
    
    int i=0;
    for(;i<strlen(kata1)||i<strlen(kata2); i++){
        if(kata1[i]!=kata2[i]){
            if(kata1[i]>kata2[i]){
                printf("+%d\n", abs(kata1[i]-kata2[i]));
            }else{
                printf("%d\n", kata1[i]-kata2[i]);
            }
            printf("%d\n", i+1);
            return 0;
        }else{
        }

    }
    printf("0\n");
    printf("0\n");
    
    return 0;
}   