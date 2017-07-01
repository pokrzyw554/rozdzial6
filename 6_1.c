#include<stdio.h>
int main(void)
{
	char tablica[26];
	int x = 0;
	int index;
	char znak;
	for(index = 0, znak = 'a'; index <26; index++, x++)
		{
		putchar(znak);
		scanf("%c", &tablica[index]);
		}
	printf("koniec petli\nwyswietlenie zawartosci\n");
	printf("%s\n", tablica);
	printf("koniec\n");
	return 0;
}
