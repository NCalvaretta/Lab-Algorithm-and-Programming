#include<stdio.h>
int main()
{
	int array[5];
	int i;
	
	printf("input 5 int: ");
	
	for(i=0; i<5; ++i){
		scanf("%d", &array[i]);
	}
	
	printf("displaying int: ");
	
	for(i=0; i<5; ++i){
		printf("\n%d", array[i]);
	}
	return 0;
}
