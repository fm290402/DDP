/* Program : BasicIO2_Fadhil.c
Deskripsi : Menampilkan  semua bilangan bulat dari X  hingga  Y dalam satu baris
Nama /Author : Fadhil Muhammad
Tanggal/versi :
Compiler : Dev C
===================================================*/
#include <stdio.h>
int main()
{
	int x,y,i;
	scanf("%d %d", &x, &y);
	
	printf("%d", x);
	for(i=x+1; i<=y; i++){
		printf(" %d", i);
	}
	
	return 0;
}