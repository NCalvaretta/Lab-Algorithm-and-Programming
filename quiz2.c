//QUIZ Lab Algorithm and Programming
//NIM: 2702221816
//Nama: Nilam Semesta Calvaretta

//Soal No. 2
#include<stdio.h>

int bilPrima(int prima, int i)
{
	if(prima<=1)
	return 0;
	for(i=2; i*i<=prima, i++)
	{
		if(prima%i == 0) return 0;
	}
	return 1;
}

int main()
{
	int baris, kolom, i, j, k, menu, tinggi;
	
	printf("1. Jajargenjang\n");
	printf("2. Segitiga Prima\n");
	printf("Pilih menu: ");
	scanf("%d", &menu);
	printf("\n");
	
	if(menu == 1)
	{
		printf("Input baris: ");
		scanf("%d", &baris);
		printf("Input kolom: ");
		scanf("%d", &kolom);
		for(i=0; i<=baris; i++){
			for(k=0; k<i; k++){
				printf(" ");
			}
			for(j=0; j<=kolom; j++){
			printf("*");
		}
		printf("\n");
	}
	}
if(menu == 2)
{
	int num = 2;
	printf("Input tinggi: \n");
	scanf("%d", &tinggi);
	for(i=1; i<=tinggi; i++){
		for(k=1; k<i; k++){
			while(!bilPrima(num))
			{
				num++;
			}
			printf("%d", num);
			num++;
		}
		printf("\n");
	}
}
}
