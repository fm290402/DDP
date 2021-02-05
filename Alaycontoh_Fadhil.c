/*Program : GanjilGenap.c
* Deskripsi : Mengubah kalimat menjadi kalimat alay dengan ketentuan yang sudah ditentukan.
* Nama : Fadhil Muhammad
* tanggal/ versi : 09 - 12 - 2020/ 1.0
* compiler : C
* tabel ASCII
*/
 
#include<stdio.h>
int main()
{   
    char kalimat[50];
    scanf("%[^\n]", kalimat);
    for (int i = 0; kalimat[i] != '\0';i++)
    {
                //huruf a dan A
        if(kalimat[i]==65 || kalimat[i]==97){
            kalimat[i]=52;
        } 
               //huruf i dan I
        if (kalimat[i]==73 || kalimat[i]==105){
            kalimat[i]=49;
        }
                //huruf e dan E
        if (kalimat[i]==101 || kalimat[i]==69){
            kalimat[i]=51;
        }
        
                //huruf g dan G
        if(kalimat[i]==71 || kalimat[i]==103){
            kalimat[i]=54;
        }
                //huruf b dan B
        if(kalimat[i]==66 || kalimat[i]==98){
            kalimat[i]=56;
        }
                // huruf z dan Z
        if(kalimat[i]==122 || kalimat [i]==90){
            kalimat[i]=50;
        }
                // huruf j dan J
        if(kalimat[i]==106 || kalimat [i]==74){
            kalimat[i]=55;
        }
        
    }
    printf("%s", kalimat);
}