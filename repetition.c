#include<stdio.h>
int main()
{
	int a, b;
	
	a=7;
	b=7;
	
	for(a=0; a<=7; a++){
		for(b=0; b<=7; b++){
			if(a==0 || a==7)
			printf("* ");
			else if(b==0 || b==7)
			printf("* ");
			else if(a==b)
			printf("* ");
			else if(b==7-a)
			printf("* ");
			else
			printf("  ");
			
		}
		printf("\n");
	}
	return 0;
}
