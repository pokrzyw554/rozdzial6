#include<stdio.h>
int main(void)
{
	int counter, counter0;
	double tablica1[8], tablica2[8];

	printf("siema, program chce 8 elementow do tablicy\n");
	printf("napierdalaj mlodziencze!\n");
	for(counter =0; counter<8; counter++)
		scanf("%lf", &tablica1[counter]);
	printf("oto tablica 1\n");
	for(counter = 0; counter <8; counter++)
		printf("%9.3f ", tablica1[counter]);	//wyswietla tablice1
	printf("\n");			//odziela tablice1 od 2giej
	tablica2[0] = tablica1[0];
	for(counter = 0; counter<8; counter++)
		tablica2[counter] = tablica1[counter]+ tablica2[counter-1];
	for(counter = 0; counter<8; counter++)
		printf("%9.3f ", tablica2[counter]);
	printf("\n");
	return 0;
}
