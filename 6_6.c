/*program napierdalajacy tabele z liczbami definiowanymi przez osobe
oraz zawierająca chSzesciany tej liczby i kwadraty*/
#include<stdio.h>
int main(void)
{
	int poczatek, koniec;

	printf("jebniemy sobie tabeleee!!\n");
	printf("tylko podaj jej dolno wartosc:\n");
	scanf("%d", &poczatek);
	printf("no spoko, a podaj jeszcze gorno wartosc\n");
	scanf("%d", &koniec);
	for( ;poczatek<=koniec;poczatek++)
		{
		printf("%5d %5d %5d\n", poczatek, poczatek*poczatek, poczatek*poczatek*poczatek);
		}
	printf("tabela jebnieta!\n");
	return 0;
}
