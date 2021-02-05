/* Program : BasicIO3_Fadhil.c
Deskripsi : Menampilkan  semua bilangan bulat dari X  hingga  Y masing - masing dalam satu baris yang berbeda
Nama /Author : Fadhil Muhammad
Tanggal/versi : 08 - 12 - 2020/ 1.0.1
Compiler : Dev C
===================================================*/
#include <stdio.h>
int main()
{
	int x,y,i;
	scanf("%d %d", &x, &y);
	
	for(i=x; i<=y; i++){
		printf("%d\n", i);
	}
	
	return 0;
}