//Quiz II Algo 2310
//Nama			: Nilam Semesta Calvaretta
//NIM			: 2702221816
//Nomor soal	: 2

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Mahasiswa {
    char nama[50];
    char nim[15];
    double ipk;
} data[50] = {
	{"Aditya Pratama", "190110011", 3.72},
    {"Bunga Sari", "200210022", 4.00},
    {"Candra Wijaya", "180910033", 3.60},
    {"Dian Utami", "200310044", 3.80},
    {"Eka Putri", "190410055", 3.70},
    {"Fajar Setiawan", "200510066", 2.85},
    {"Gita Kusuma", "180610077", 3.55},
    {"Hana Safitri", "190710088", 3.95},
    {"Irfan Ramadhan", "200810099", 2.00},
    {"Jihan Nurul", "1809101010", 3.75},
    {"Kurnia Putra", "1901101111", 3.80},
    {"Lina Fitriani", "2002101212", 3.90},
    {"Miftahul Huda", "1803101313", 3.70},
    {"Nanda Putri", "1904101414", 3.85},
    {"Oktavia Indah", "2005101515", 3.59},
    {"Prima Setiawan", "1806101616", 3.75},
    {"Qoriyah Aulia", "1907101717", 2.27},
    {"Rizki Pratama", "2008101818", 3.65},
    {"Siti Rahmah", "1809101919", 3.95},
    {"Tegar Wijaya", "1901102020", 3.60},
    {"Umi Kholidah", "2002102121", 3.75},
    {"Vina Andriani", "1803102222", 3.80},
    {"Wahyu Kusuma", "1904102323", 3.90},
    {"Xaverius Budi", "2005102424", 3.70},
    {"Yuli Astuti", "1806102525", 3.85},
    {"Zainal Abidin", "1907102626", 3.55},
    {"Ade Irawan", "2008102727", 3.75},
    {"Bella Wulandari", "1809102828", 3.80},
    {"Cahya Putri", "1901102929", 4.00},
    {"Dito Prabowo", "2002103030", 3.73}
};

int jmlData = 30;

void swap(struct Mahasiswa *a, struct Mahasiswa *b) {
    struct Mahasiswa temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSortIPK(struct Mahasiswa data[], int jmlData) {
    for (int i = 0; i < jmlData-1; i++) {
        for (int j = 0; j < jmlData-i-1; j++) {
            if (data[j].ipk < data[j+1].ipk) {
                swap(&data[j], &data[j+1]);
            }
        }
    }
}

int main() {
	int menu;
	
	printf("==================================================\n");
	printf("------------ Program Management Nilai ------------\n");
	printf("==================================================\n\n");
	
	printf("1. Tampilkan daftar mahasiswa berdasarkan IPK tertinggi\n");
	printf("2. Cari mahasiswa berdasrkan NIM\n");
	printf("3. Exit\n\n");
	
	printf("Pilih menu: ");
	scanf("%d", &menu);
	
	if(menu == 1){
		bubbleSortIPK(data, jmlData);
		for(int i=0; i<jmlData; i++){
			printf("Nama	: %s\n", data[i].nama);
			printf("NIM	: %s\n", data[i].nim);
			printf("IPK	: %.2lf\n", data[i].ipk);
		}
	}
	else if(menu == 2){
		char nimToSearch[15];
        printf("NIM mahasiswa yang dicari: ");
        scanf(" %[^\n]", nimToSearch);

        int found = 0;
        for (int i = 0; i < jmlData; i++) {
            if (strcmp(data[i].nim, nimToSearch) == 0) {
                found = 1;
                printf("Nama    : %s\n", data[i].nama);
                printf("NIM     : %s\n", data[i].nim);
                printf("IPK     : %.2lf\n", data[i].ipk);
                break;
		}
	}
}
	else if(menu == 3){
		return 0;
	}
}

