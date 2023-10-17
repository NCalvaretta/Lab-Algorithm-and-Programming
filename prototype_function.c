#include<stdio.h>
//prototype function: function dibawah main
float hitung_luas_persegi(int panjang, int lebar);
int main()
{
    int panjang, lebar;
    printf("Input panjang: ");
    scanf("%d", &panjang);
    printf("Input lebar: ");
    scanf("%d", &lebar);
    printf("Luas Persegi = %.2f", hitung_luas_persegi(panjang, lebar));
    
    return 0;
}

float hitung_luas_persegi(int panjang, int lebar)
{
    float luas;
    luas = panjang * lebar;
    return luas;
}