/*Program : CountPrima.c
* Deskripsi : program menghitung bilangan prima pada array A
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
    int i=0,j=0,x[10], prima = 0;
    bool isprime;
    for(;i<10;i++){
        isprime = false;
        scanf("%d", &x[i]);

        if(x[i]<=1){
            continue;
        }else{
            for(j=2;j<x[i];j++){
                if(x[i]%j==0){
                    isprime = true;
                    break;
                }
                
            }
        }
        if (!isprime){
            prima++;
        }   
    }
    printf("%d\n", prima);

    return 0;
}