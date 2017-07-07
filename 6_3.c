#include<stdio.h>
int main(void)
{
	int licznik;
	int x;
	char c;

	for(licznik =1; licznik <7; licznik++)
		{
		c = 'F';
		for(x=0;x<licznik;x++, c--)
			printf("%c", c);
		printf("\n");
		}
	return 0;
}

