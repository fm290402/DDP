/*Program : Kue.c
* Deskripsi : Program menentukan apakah dua kue sama atau tidak dengan peraturan yang sudah ditentukan.
* Nama : Fadhil Muhammad
* tanggal/ versi : 14 - januari - 2020 / 1 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>

int main(){ 
    //kamus data
    float sama=0,rate;
    int x,y;
    char k1[17],k2[17];

    //program
    scanf("%f", &rate);
    getchar();
    fgets(k1,sizeof(k1),stdin);
    fgets(k2,sizeof(k2),stdin);

    for(x=0;x<strlen(k1)-1;x+=2){
        for(y=0;y<strlen(k2)-1;y+=2){
            if(k1[x]==k2[y]){
                sama++;break;
            }
        }
    }
    if (sama/8>=rate/100){
        printf("sama\n");
    }else{
        printf("tidak sama\n");
    }

    return 0;
}