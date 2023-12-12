//Quiz II Algo 2310
// Nama			: Nilam Semesta Calvaretta
// NIM			: 2702221816
// Nomor soal	: 1

#include<stdio.h>
#include<string.h>

typedef struct data{
	char nama[101];
}list;

int main()
{
	list ke[1001];
	int menu;
	
	printf("==================================================\n");
	printf("------------ Program Management Nama -------------\n");
	printf("==================================================\n\n");
	
	printf("1. Tampilkan daftar nama\n");
	printf("2. Tambahkan nama baru ke file\n");
	printf("3. Exit\n\n");
	
	printf("Pilih menu: ");
	scanf("%d", &menu);
	
	if(menu == 1){
		int idx = 0;
		FILE*data = fopen("nama.txt", "r");
		while(fscanf(data, "%[^\n]\n", ke[idx].nama) !=EOF){
			idx++;
		}
		fclose(data);
		for(int i = 0; i < idx; i++){
			printf("%s\n", ke[i].nama);
		}
	}
	
	else if(menu == 2){
		FILE*data = fopen("nama.txt", "a");
		char tambah[101];
		
		printf("Masukkan nama baru: ");
		scanf(" %[^\n]", tambah);
		printf("\nFile berhasil dibuka!");
		fprintf(data, "%s\n", tambah);
		printf("\n\nNama baru: %s berhasil ditambahkan", tambah);
	}
	else if(menu == 3)
	{
		return 0;
	}
}

