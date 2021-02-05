/*Program : SelisihPrima.c
* Deskripsi : Program untuk menghitung selisih bilangna prima terbesar dan terkecil.
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
    int i,x,y,angka1,angka2;
    bool notprime;

    //program
    scanf("%d %d", &x, &y);

    angka1 = --x;
    do{
        notprime = false;
        angka1++;
        if(angka1<=1){
            notprime=true;
        }else{
            for (i=2;i<angka1;i++){
                if(angka1%i==0){
                    notprime=true;
                    break;
                }
            }
        }
    }while(notprime);
    
    angka2= ++y;
    do{
        notprime = false;
        angka2--;
        if(angka2<=1){
            notprime=true;
        }else{
            for(i=2;i<angka2;i++){
                if(angka2%i==0){
                    notprime=true;
                    break;
                }
            }
        }
    }while(notprime);

    printf("%d\n", angka2-angka1);

    return 0;
}