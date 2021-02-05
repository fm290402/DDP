/*Program : holes.c
* Deskripsi :  program untuk menghitung berapa banyak lubang yang terdapat pada sebuah teks.
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
    // kamus data 
    int i, n = 0;
    char kata[52];

    // program
    scanf("%s", kata);
    
    for (i=0;i<strlen(kata); i++){
        if(tolower(kata[i])=='b') n+=2;
        else if (tolower(kata[i])=='a' || (tolower(kata[i])=='d' || (tolower(kata[i])=='o' || (tolower(kata[i])=='q'|| (tolower(kata[i])=='r')))))
        n++;
    }
    printf("%d\n", n);
    return 0;
}