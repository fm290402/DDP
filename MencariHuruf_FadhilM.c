/*Program : MencariHuruf.c
* Deskripsi : Mendeteksi apakah ada huruf yang diinputkan di dalam array
* Nama : Fadhil Muhammad
* tanggal/ versi : 14 - 12 - 2020/ 1.3
* compiler : C
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(){
    // kamus data
    int i=0;
    char* kata = "jtkpolban";
    char key = tolower(getchar());

    // program
    for(;i<strlen(kata)-1; i++){
        if(key==kata[i]){
            printf("ada\n");return 0;
        }
    }
    printf("tidak ada\n");
    
    return 0;
} 