//QUIZ Lab Algorithm and Programming
//NIM: 2702221816
//Nama: Nilam Semesta Calvaretta

//Soal No. 3
#include<stdio.h>
int main()
{
	int menu, fib, nat, perN, perR, komN, komR;
	
	printf("Serba-Serbi Rekursi\n");
	printf("===================\n");
	printf("1. Deret Fibonacci\n");
	printf("2. Bilangan Natural\n");
	printf("3. Permutasi\n");
	printf("4. Kombinasi\n");
	printf("5. Keluar\n");
	printf("Pilih >> ");
	scanf("%d", &menu);
	printf("\n");
	
	if(menu == 1)
	{
		printf("Pilih >> 1\n");
		printf("Masukkan angka n : ");
		scanf("%d", &fib);
	}
	if(menu == 2)
	{
		printf("Pilih >> 2\n");
		printf("Masukkan angka n: ");
		scanf("%d", &nat);
	}
	if(menu == 3)
	{
		printf("Pilih >> 3\n");
		printf("Masukkan angka n : \n");
		scanf("%d", &perN);
		printf("Masukkan angka r : \n");
		scanf("%d", &perR);
	}
	if(menu == 4)
	{
		printf("Pilih >> 4\n");
		printf("Masukkan angka n : \n");
		scanf("%d", &komN);
		printf("Masukkan angka r : \n");
		scanf("%d", &komR);
	}
	if(menu == 5)
	
	return 0;
}
