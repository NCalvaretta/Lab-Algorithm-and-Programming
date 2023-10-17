#include<stdio.h>
int main ()
{
	int a,i,b;
	
	printf ("Enter jumlah siswa : ");
	scanf ("%d",&a);
	
	char arr_name [a] [100];
	char arr_nim [a] [10];
	int arr_umur [a];
	
	for (i=0; i<a; i++) {
		printf ("Siswa %d \n",i);
		printf ("Nama : ");
		scanf ("%s",&arr_name [i]);
		printf ("Nim : ");
		scanf ("%s",&arr_nim [i]);
		printf ("Umur : ");
		scanf ("%d",&arr_umur [i]);
		printf ("\n");
	}
	
	printf ("Data siswa : \n \n");
	for (i=0; i<a; i++) {
		printf ("Siswa %d \n",i);
		printf ("Nama : ");
		printf ("%s\n",arr_name [i]);
		printf ("Nim : ");
		printf ("%s\n",arr_nim [i]);
		printf ("Umur : ");
		printf ("%d\n",arr_umur [i]);
		printf ("\n");
	}
	return 0;
}
