#include<stdio.h>
int main(void)
{
	char tablica[26];
	int x = 0;
	int index;
	char znak;
	printf("zapiszemy sobie tablice\n");
	for(index = 0, znak = 'a'; index <26; index++)
		{
		tablica[index] = znak;
		//scanf("%c", &tablica[index]);
		printf("%c", znak);
		znak++;
		}
	printf("\nkoniec petli\nwyswietlenie zawartosci\n");
	for(index = 0; index<26 ; index++)
		{
		printf("%c", tablica[index]);
		}
	printf("\nkoniec\n");
	return 0;
}
