/*Program : Prima.c
* Deskripsi : Program untuk menentukan apakah X merupakan bilangan prima atau bukan.
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
    // kamus data
    int x,i;

    //program
    scanf("%d", &x);

    if(x<=1){
        printf("bukan prima\n");
    }else{
        for(i=2;i<x;i++)
            if (x%i==0){
                printf("bukan prima\n"); return 0;
            }
    }
    printf("prima\n");
    return 0;
}