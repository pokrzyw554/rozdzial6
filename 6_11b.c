//program ma napierdalac tablice od tyłu xD
#include<stdio.h>
int main(void)
{
	int index, zmienna;
	char tablica[8];

	printf("albo ja wygeneruje liczby do tablicy albo pan\n");
	printf("moze na razie jednak ja\n");
	for(index = 0, zmienna = 2; index < 8 ;zmienna += 2, index++)
		scanf("%d", &tablica[index]);	//index to jednoczesnie counter
	printf("o to tablica %d\n", tablica);
	printf("tera od tylu:\n");
	for(index = 7; index>=0; index--)
		printf("%d ", tablica[index]);
	printf("\nkoniec programu\n");
	return 0;
}
