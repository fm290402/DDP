/* Program : BasicIO2_Fadhil.c
Deskripsi : Menampilkan  semua bilangan bulat dari X  hingga  Y dalam satu baris
Nama /Author : Fadhil Muhammad
Tanggal/versi :
Compiler : Dev C
===================================================*/
#include<stdio.h>

int main(){
    int i,x,y;
    
    scanf ("%d %d", &x, &y);

    for (i=x;i<=y;i++){
        printf(" %d", i);
    }
    return 0;
}