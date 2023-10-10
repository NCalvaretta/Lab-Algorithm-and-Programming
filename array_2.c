#include<stdio.h>
int main()
{
	char array[3][30];
	int i;
	
	for(i=0; i<3; i++){
		scanf("%s %s %s", array[0], array[1], array[2]);
	}
	for(i=0; i<3; i++){
		printf("\n%s", array[i]);
	}
	
	return 0;
	
}
