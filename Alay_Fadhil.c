/*Program : GanjilGenap.c
* Deskripsi : Mengubah kalimat menjadi kalimat alay dengan ketentuan yang sudah ditentukan.
* Nama : Fadhil Muhammad
* tanggal/ versi : 09 - 12 - 2020/ 1.0
* compiler : C
*/

#include <stdio.h>

int main (){
    // kamus data //
    char kalimat[52];
    int i;

    fgets(kalimat, sizeof(kalimat), stdin);

    for (i = 0; i<52;i++){
        switch(kalimat[i]){
            case 'A':
                kalimat[i] = '4';
            break;
            case 'a':
                kalimat[i] = '4';
            break;
            case 'I':
                kalimat[i] = '1';
            break;
            case 'i':
                kalimat[i] = '1';
            break;
            case 'Z':
                kalimat[i] = '2';
            break;
            case 'z':
                kalimat[i] = '2';
            break;
            case 'E':
                kalimat[i] = '3';
            break;
            case 'e':
                kalimat[i] = '3';
            break;
            case 'G':
                kalimat[i] = '6';
            break;
            case 'g':
                kalimat[i] = '6';
            break;
            case 'J':
                kalimat[i] = '7';
            break;
            case 'j':
                kalimat[i] = '7';
            break;
            case 'B':
                kalimat[i] = '8';
            break;
            case 'b':
                kalimat[i] = '8';
            break;
        }
    }
    printf("%s", kalimat);
    return 0;
}
