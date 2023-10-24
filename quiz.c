//QUIZ Lab Algorithm and Programming
//NIM: 2702221816
//Nama: Nilam Semesta Calvaretta

//Soal No. 1
#include<stdio.h>
int main()
{
	int x, num1, num2, num3, y, a, b, c;
	printf("Menu Navigasi\n");
	printf("1. Positive or Negative\n");
	printf("2. Grading\n");
	printf("3. Largest Number\n");
	printf("Pilihan Menu: ");
	scanf("%d", &x);
	printf("\n");
	
	if(x == 1)
	{
		printf("Masukkan 3 Angka: ");
		scanf("%d %d %d", &num1, &num2, &num3);
		if(num1<0 || num2<0 || num3<0){
			printf("1 angka negatif");
		}
		else if(num1<0 && num2<0){
			printf("2 angka negatif");
		}
		else if(num2<0 && num3<0){
			printf("2 angka negatif");
		}
		else if(num1<0 && num3<0){
			printf("2 angka negatif");
		}
		else if(num1<0 && num2<0 && num3<0){
			printf("3 angka negatif");
		}
		else if(num1>0 && num2>0 && num3>0){
			printf("Tidak ada angka negatif");
		} 
	}
	if(x == 2)
	{
		printf("Menu nilai\n");
		printf("Masukkan nilai: ");
		scanf("%d", &y);
		if(y <= 100 && y >= 85){
			printf("Grade A");
		}
		else if(y <= 84 && y >= 70){
			printf("Grade B");
		}
		else if(y <= 69 && y >= 65){
			printf("Grade C");
		}
		else if(y <= 64 && y >= 50){
			printf("Grade D");
		}
		else{
			printf("Grade E");
		}
	}
	if(x == 3)
	{
		printf("Masukkan 3 angka: ");
		scanf("%d %d %d", &a, &b, &c);
		if(a>b && a>c){
			printf("%d", a);
		}
		else if(b>a && b>c){
			printf("%d", b);
		}
		else if(c>a && c>b){
			printf("%d", c);
		}
	}
return 0;
}

