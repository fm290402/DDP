/*Program : PointCircle.c
* Deskripsi : program untuk memeriksa posisi suatu titik terhadap lingkaran.
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
    point pus, tik;
    int r, xy;
 
    scanf("%d %d", &pus.x, &pus.y);
    scanf("%d", &r);
    scanf("%d %d", &tik.x, &tik.y);

    xy=pow((tik.x-pus.x),2)+pow((tik.y-pus.y), 2);

    if((pus.x==tik.x)&&(pus.y==tik.y)){
        printf("tepat pada titik pusat\n");
    }else if(xy>r*r){
        printf("di luar lingkaran\n");
    }else if(xy<r*r){
        printf("di dalam lingkaran\n");
    }else{
        printf("tepat pada lingkaran\n");
    }
    
    return 0;
}   