#include<stdio.h>
int main(void)
{
	int x;
	int counter;
	char z = 'A';

	for(counter=1; counter<7; counter++)
		{
		for(x=0;x<counter;x++,z++)
			printf("%c", z);
		printf("\n");
		}
	return 0;
}