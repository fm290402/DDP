/*Program : GanjilGenap.c
* Deskripsi : Mendeteksi huruf vokal dan huruf konsonan
* Nama : Fadhil Muhammad
* tanggal/ versi : 14 - 12 - 2020/ 1.1
* compiler : C
*/

#include <stdio.h>
int main(){
   char c;
   scanf("%c",&c);
   if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
      printf("true");
   else
      printf("false");
   return 0;
}