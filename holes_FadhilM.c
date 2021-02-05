/*Program : holes.c
* Deskripsi :  program untuk menghitung berapa banyak lubang yang terdapat pada sebuah teks.
* Nama : Fadhil Muhammad
* tanggal/ versi : 10 - januari - 2020 / 1
*/


#include<stdio.h>

int main()
{
 int t,l,j,i,count;
 char s[100];
 scanf("%d",&t);
 for(i=0;i<t;i++)
 {
    scanf("%s",s);
    count=0;

    for(j=0;s[j]!='\0';j++)
    {
        if(s[j]=='B') count+=2;
        else if(s[j]=='A'|| s[j]=='P' || s[j]=='O' || s[j]=='D' || s[j]=='R' || s[j]=='Q')
          count++;
    }
  printf("%d\n",count);
 }
 return 0;
}