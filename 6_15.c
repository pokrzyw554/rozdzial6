//program odwraca lancuch znakowy (jebnij to kiedys jako funkcje)
#include<stdio.h>
#include<string.h>
int main(void)
{
	int counter, wynik, dlugosc;
	char znaki[255];
	printf("podaj mnie lancuszek znakow to ja Ci go odwroce\n");
	printf("napierdalamy!\n");
	wynik=1;
		//tymczasowa petla do testow
	for(counter=0; (int)znaki[counter-1] !=10 ; ++counter)//jezeli znak wejsciowy jest nie '\n', wykonuj petle
		scanf("%c", &znaki[counter]);	//poprawnie pobiera znaki
						//do znaku enter
	dlugosc=counter -1;
	printf("ok, wiec wkleiles:\n");
	//printf("counter = %d\n", counter);
	for(counter=0;counter<dlugosc;counter++)	//prawidlowo wyswietla
		printf("%c", znaki[counter]);		//ilosc znakow
//	printf("\n");
	for( ;counter>=0;--counter)
		printf("%c", znaki[counter]);
	printf("\n");
	return 0;
}
