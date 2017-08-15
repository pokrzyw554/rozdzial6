#include<stdio.h>
int main(void)
{
	float ciag1, ciag2;
	int counter,count, znak, wprowadzona;
	float mianownik1, mianownik2;

	mianownik1 = 2.0;
	mianownik2 = 2.0;
	ciag1 = 1.0/mianownik1;
	ciag2 = -(1.0/mianownik2);
	printf("jebniemy sobie ciagi\n");
	printf("pierwszy ciag :\n");
	printf("%.4f %.4f %.4f\n", 1.0/2.0, 1.0/3.0, 1.0/4.0);
	printf("drugi  ciag :\n");
	printf("%.4f %.4f %.4f\n",-1.0/2.0, 1.0/3.0, -1.0/4.0);
	printf("ktory wyraz ciagu Ci policzyc?\n");
	scanf("%d", &wprowadzona);
	for(counter =1; counter<wprowadzona;counter++)
		{		//tylko jeszcze zaimplementuj petle do wyboru
		count=counter;	//ktory wyraz ma byc liczony
		for(znak=-1;count>0;count--)
			znak*= -1;
		ciag1+= 1.0/++mianownik1;
		ciag2+= znak*(1.0/++mianownik2);
/*		printf("kolejne wyrazy:\n");
		printf("%f \n", ciag1);
		printf("%f \n", ciag2);
		printf("%d\n", znak);	*/	//dobrze oblicza 5 (counter) razy ten gupi ciag
		}
	printf("o to twoje wyrazu ciagu:\n");
	printf("%.10f\n", ciag1);
	printf("%.10f\n", ciag2);
	printf("koniec programu!\n");
	return 0;
}
