#include<stdio.h>
int main(void)
{
	int x, counter;
	char znak = '$';
	for(x=1; x <=5 ; x++)
		{
		for(counter = 0; counter < x; ++counter)
			printf("%c", znak);
		printf("\n");
		}
	return 0;
}
