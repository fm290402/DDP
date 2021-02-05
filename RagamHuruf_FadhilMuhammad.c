/*Program : Ragam huruf.c
* Deskripsi : program untuk menghitung ragam jenis huruf dari sebuah string yang dibaca.
* Nama : Fadhil Muhammad
* tanggal/ versi : 10 - januari - 2020 / 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>

int main(){
    //kamus data
    int i, n=0, j;
    bool sama=false;
    char kata[28]; 
    scanf("%s", kata);
    
    // algoritma
    for(i = 0; i<strlen(kata); i++){
        sama=false;
        for(j=i+1; j<strlen(kata); j++){
            if(tolower(kata[i])==tolower(kata[j])){
                sama=true;
                break;
            }
        }
        if(!sama){
            n++;
        }
    }
    printf("%d\n", n);

    
    return 0;
}   