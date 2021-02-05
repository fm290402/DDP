/*Program : ArrayPoint.c
* Deskripsi : program untuk memeriksa apakah array M dan N sama.
* Nama : Fadhil Muhammad
* tanggal/ versi : 04 - 02 - 2021 / 1 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>

typedef struct{
    int x;
    int y;
}point;

int main(){
    point a1[5], a2[5];

    int i = 0;
    for(; i<5; i++){
        scanf("%d %d", &a1[i].x, &a1[i].y);
    }
    for(i=0; i<5; i++){
        scanf("%d %d", &a2[i].x, &a2[i].y);
    }
    for(i=0; i<5; i++){
        if((a1[i].x!=a2[i].x)||(a1[i].y!=a2[i].y)){
            printf("tidak sama\n");
            return 0;
        }
    }
    printf("sama\n");
    
    return 0;
}   