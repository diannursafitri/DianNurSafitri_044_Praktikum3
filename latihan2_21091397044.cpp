#include<stdio.h>
main()
{
	char kar_besar,kar_kecil;
	printf("Program konversi huruf besar menjadi huruf kecil\n");
	printf("masukkan sebuah huruf besar:");
	scanf("%c",kar_besar);
	kar_kecil=kar_besar+32;
	printf("huruf kecil:%c\n",kar_kecil);
}
