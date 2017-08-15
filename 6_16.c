/*ewa odklada na lokacie prostej, a kasia na zlozonej*/
#include<stdio.h>
int main(void)
{
	float start,zlozony,prosty;
	int counter = 1;
	start =100;
	printf("ewa odlozyla 100 zeta na lokate 10%\n");
	printf("katarzyna odlozyla 100 na lokate 5% skladano\n");
	zlozony = start;
	prosty = start;
	do
		{
		printf("rok kasia    ewa\n");
		printf("%2d %6.2f %6.2f\n",counter, zlozony, prosty);
		prosty += 10.0;
		zlozony *=1.05;
		counter++;
		}while(zlozony<prosty);
	printf("rok kasia   ewa\n");
	printf("%2d %6.2f %6.2f\n", counter, zlozony, prosty);
	printf("wiec po %d latach ich inwestycje sie wyruwnajo\n", counter);
	return 0;
}
