/*
 * 6_13.c
 *
 *  Created on: 16 lip 2017
 *      Author: krzychu
 program napierdala tablice 8 potęg liczby 2
 po czym je wyświetla
 */

#include<stdio.h>
int main(void)
{
	int gorna, index, potega;
	int tablica[8];

	printf("jebne tablice poteg liczby 2\n");
	printf("no to zaczynajmy!\n");
	for(index = 0, potega =1; index<8;index++)
	{

		tablica[index] = potega;
		potega *= 2;
	}
	gorna = 0;
	index = 0;
	do
	{

		printf("%d  ", tablica[index]);
		gorna++;
		index++;

	}while(index<8);
	printf("\n koniec debuga\n");
	return 0;
}
