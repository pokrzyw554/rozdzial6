/*tutaj jebniemy sobie piramidke <szyderczyHalasVlog_face> */
/*hehe*/
#include<stdio.h>
int main(void)
{
	int x, rzedy, counter, y;		//potrzebujemy jakis zmiennych
	char znak;
	char start, limit;

	printf("no dobrze, pierdolniemy sobie tabelke\n");
	printf("podaj jakis znak mlodziencze!\n");
	scanf("%c", &znak);
	printf("podales %c wiec zaczynamy\n", znak);
	rzedy = (int)znak - 'A' + 1;
	for(x=rzedy,counter=1 ;rzedy>0 ;rzedy--, counter++)	//liczba rzedow
		{				//wykonuje sie ok
		for(x=rzedy ,--x; x>=0 ;x--)	//wykonaj rzedy -= 1 spacji
			printf(" ");
		for(start ='A', limit =(int)znak -rzedy+1 ;start<=limit ;start++)		//ta petla wykona znaki
			printf("%c", start);	//petla odpierdala co powinna
		printf("");
		(int)--start;
		(int)--start;
		for( ;start >= 'A' ;start-- )	//DONE!
			printf("%c", start);
		printf("\n");
		}
//testy	printf("%d\n", 'D' - 'A' + 1);
	return 0;
}
