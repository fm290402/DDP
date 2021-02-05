/*Program : GanjilGenap.c
* Deskripsi : Menampilkan bilangan terbesar dari tiga input.
* Nama : Fadhil Muhammad
* tanggal/ versi : 09 - 12 - 2020/ 1.0
* compiler : C
*/

#include <stdio.h>
int main (){
//kamus data//
int a,b,c,max,min;

//algoritma//
scanf("%d %d %d", &a, &b, &c);

if (a>b){
    max = a, min = b;
}else{
    max = b, min = a;
}
if (c>max){
    max = c;
}if (c<min){
    min = c;
}
printf("%d",max);
return 0;
}