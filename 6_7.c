/*pare etapow
1. wczytaj slowo do tablicy znakowej
2. wyswietl to slowo wspak*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	int counter, dlugosc;
	char slowo[16];

	printf("podasz mi slowo, a ja je jebne wspak\n");
	printf("nakurwiaj slowem!\n");
	scanf("%s", slowo);
	dlugosc=strlen(slowo);
	printf("podane slowo to %s o dlugosci %d znakow\n", slowo, dlugosc);
	printf("jebne je wspak\n");
	for(counter=0 ; dlugosc>=0 ;dlugosc--)
		printf("%c", slowo[dlugosc]);
	printf("\njeblem\n");
	return 0;
}
